FROM debian:bookworm-slim

# Versão do Dockerfile
ARG VERSION=0.1.0

# URL do repositório
ARG GENESYS_REPO=https://github.com/rlcancian/Genesys-Simulator

# Se o modo de execução é local ou remoto
ENV REMOTE=0

# A branch que o container usa
ENV GENESYS_BRANCH=master

# Caminho onde o GenESyS vai ser clonado
ENV GENESYS_ROOT=/home/genesys/remote

# Sub-caminho onde está localizado o arquivo do projeto
ENV GENESYS_PROJECT_SUBPATH=source/applications/gui/qt/GenesysQtGUI/GenesysQtGUI.pro

# Sub-caminho onde está o binário do Genesys com GUI
ENV GENESYS_GUI_SUBPATH=source/applications/gui/qt/GenesysQtGUI/build-GenesysQtGUI-Desktop-Debug

# Sub-caminho onde está o binário do Genesys sem GUI
ENV GENESYS_NOGUI_SUBPATH=GenesysShell

LABEL maintainer=$GENESYS_USER \
url=$GENESYS_REPO \
name="docker-genesys" \
version=$VERSION

# Instala todas as bibliotecas necessárias
RUN echo "Instalando pre-requisitos" && \
    apt-get update && \
    DEBIAN_FRONTEND=noninteractive apt-get --assume-yes --no-install-recommends install \
        build-essential \
        build-essential \
        curl \
        git \
        libclang1 \
        libgl1-mesa-dri \
        libgl1-mesa-glx \
        xdg-utils \
        qtcreator \
        qtbase5-dev \
        qttools5-dev \
        ca-certificates \
        gnupg \
        lsb-release \
        qt6-base-dev \
        qt6-tools-dev 
        
# Diminui o tamanho da imagem
RUN echo "Limpando" && \
    apt-get autoremove --assume-yes && \
    apt-get clean && \
    rm --force --recursive /var/lib/apt/lists/* /tmp/* /var/tmp/*

# Instala o comando gh que é o CLI oficial do GitHub
RUN echo "Preparando GitHub CLI" && \
    type -p curl >/dev/null || (apt-get update && apt-get install curl -y) && \
    curl -fsSL https://cli.github.com/packages/githubcli-archive-keyring.gpg | dd of=/usr/share/keyrings/githubcli-archive-keyring.gpg && \
    chmod go+r /usr/share/keyrings/githubcli-archive-keyring.gpg && \
    echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/githubcli-archive-keyring.gpg] https://cli.github.com/packages stable main" | tee /etc/apt/sources.list.d/github-cli.list > /dev/null && \
    apt-get update && \
    apt-get install --assume-yes --no-install-recommends gh

# Clona o GenESyS
RUN echo "Clonando GeNESyS" && \
    git clone --depth 1 --single-branch --branch $GENESYS_BRANCH $GENESYS_REPO $GENESYS_ROOT
    
# Copia o script de inicialização para dentro do container
COPY scripts/entrypoint.sh /usr/local/bin/entrypoint.sh 
RUN chmod +x /usr/local/bin/entrypoint.sh

# Executa o script de inicialização
ENTRYPOINT ["bash", "/usr/local/bin/entrypoint.sh"]
