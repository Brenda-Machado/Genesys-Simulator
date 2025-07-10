#!/usr/bin/env bash
# Script de execução interativa do container GenESyS em modo Shell

# Carrega variáveis de ambiente (GENESYS_IMAGE, GENESYS_ROOT etc.)
source ./scripts/env.sh

# Definição do diretório de modelos no host (pode ser sobrescrito externamente)
HOST_MODELS_DIR="${HOST_MODELS_DIR:-$HOME/genesys-models}"

# Verifica se a pasta de modelos existe e emite aviso caso não exista
if [[ ! -d "$HOST_MODELS_DIR" ]]; then
    echo
    echo "⚠️  Pasta de modelos não encontrada em: $HOST_MODELS_DIR"
    echo "   Crie-a com: mkdir -p \"$HOST_MODELS_DIR\""
    echo
fi

if docker image inspect "$GENESYS_IMAGE" >/dev/null 2>&1; then
    xhost local:root
    if [[ "$REMOTE" == "1" ]]; then
        docker run --name genesys --rm -ti --net=host --ipc=host \
            -e DISPLAY="$DISPLAY" \
            -e MESA_LOADER_DRIVER_OVERRIDE="$MESA_LOADER_DRIVER_OVERRIDE" \
            -e GENESYS_NOGUI_SUBPATH="$GENESYS_NOGUI_SUBPATH" \
            -e QT_X11_NO_MITSHM=1 \
            -e XDG_RUNTIME_DIR=/run/user/1001 \
            -v /tmp/.X11-unix:/tmp/.X11-unix \
            -v "$HOST_MODELS_DIR:/home/genesys/remote/models" \
            "$GENESYS_IMAGE" nogui
    else
        docker run --name genesys --rm -ti --net=host --ipc=host \
            -e DISPLAY="$DISPLAY" \
            -e REMOTE="$REMOTE" \
            -e MESA_LOADER_DRIVER_OVERRIDE="$MESA_LOADER_DRIVER_OVERRIDE" \
            -e GENESYS_NOGUI_SUBPATH="$GENESYS_NOGUI_SUBPATH" \
            -e GENESYS_ROOT="$GENESYS_ROOT" \
            -e QT_X11_NO_MITSHM=1 \
            -e XDG_RUNTIME_DIR=/run/user/1001 \
            -v /tmp/.X11-unix:/tmp/.X11-unix \
            -v "$GENESYS_PROJECT:$GENESYS_ROOT" \
            -v "$HOST_MODELS_DIR:/home/genesys/remote/models" \
            "$GENESYS_IMAGE" nogui
    fi
else
    echo "Build não executado: imagem '$GENESYS_IMAGE' não encontrada."
fi
