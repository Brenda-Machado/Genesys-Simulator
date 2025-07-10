#!/usr/bin/env bash

set -euo pipefail

log() {
    printf '[!] %s
' "$*"
}

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
    log "ERRO: Argumento do modo faltando"
    usage
fi
MODE=$1

if [[ "${REMOTE:-0}" == "1" ]]; then
    log "Executando a partir do código remoto"
    git -C "$GENESYS_ROOT" fetch --all || { log "ERRO: falha no git fetch"; exit 1; }
    git -C "$GENESYS_ROOT" reset --hard "origin/$GENESYS_BRANCH" || { log "ERRO: falha no git reset"; exit 1; }
else
    log "Executando a partir do código local"
fi

case "$MODE" in
  gui)
    log "Executando GUI"
    exec "$GENESYS_ROOT/$GENESYS_GUI_SUBPATH" || { log "ERRO: falha na execução da GUI"; exit 1; }
    ;;
  nogui)
    log "Executando shell"
    exec "$GENESYS_ROOT/$GENESYS_NOGUI_SUBPATH" || { log "ERRO: falha na execução da shell"; exit 1; }
    ;;
  qt)
    log "Executando Qt Creator"
    exec /usr/bin/qtcreator "$GENESYS_ROOT/$GENESYS_PROJECT_SUBPATH" || { log "ERRO: falha na execução do Qt Creator"; exit 1; }
    ;;
  debug)
    log "Entrando na shell de debug"
    exec /bin/bash
    ;;
  *)
    log "ERRO: modo desconhecido: $MODE"
    usage
    ;;
esac


