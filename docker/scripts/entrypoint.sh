#!/usr/bin/env bash

set -euo pipefail

usage() {
    cat <<EOF
Uso: $(basename "$0") <modo>
  modos:
    gui     - Executa a GenESyS GUI
    nogui   - Executa o GenESyS Shell
    qt      - Abre o projeto na IDE do GenESyS (QtCreator)
    debug   - Direto pro bash
EOF
    exit 1
}

if [[ $# -ne 1 ]]; then
    echo "ERRO: Argumento do modo faltando"
    usage
fi
MODE=$1

if [[ "${REMOTE:-0}" == "1" ]]; then
    echo "Executando a partir do código remoto"
    git -C "$GENESYS_ROOT" fetch --all || { echo "ERRO: falha no git fetch"; exit 1; }
    git -C "$GENESYS_ROOT" reset --hard "origin/$GENESYS_BRANCH" || { echo "ERRO: falha no git reset"; exit 1; }
else
    echo "Executando a partir do código local"
fi

case "$MODE" in
  gui)
    echo "Executando GUI"
    exec "$GENESYS_ROOT/$GENESYS_GUI_SUBPATH" || { echo "ERRO: falha na execução da GUI"; exit 1; }
    ;;
  nogui)
    echo "Executando shell"
    exec "$GENESYS_ROOT/$GENESYS_NOGUI_SUBPATH" || { echo "ERRO: falha na execução da shell"; exit 1; }
    ;;
  qt)
    echo "Executando Qt Creator"
    exec /usr/bin/qtcreator "$GENESYS_ROOT/$GENESYS_PROJECT_SUBPATH" || { echo "ERRO: falha na execução do Qt Creator"; exit 1; }
    ;;
  debug)
    echo "Entrando na shell de debug"
    exec /bin/bash
    ;;
  *)
    echo "ERRO: modo desconhecido: $MODE"
    usage
    ;;
esac


