# GenESyS Docker

[![Docker](https://img.shields.io/badge/Docker-2496ED?style=for-the-badge&logo=docker&logoColor=white)](https://www.docker.com/)
[![Qt](https://img.shields.io/badge/Qt-41CD52?style=for-the-badge&logo=qt&logoColor=white)](https://www.qt.io/)
[![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)](https://www.linux.org/)

Um ambiente Docker containerizado para desenvolvimento e execução do **GenESyS Simulator** - uma ferramenta de simulação de eventos discretos.

## Pré-requisitos

- Docker Engine >= 20.10

## Guia do Usuário

### 1. Configuração Inicial

Clone o repositório e acesse o diretório docker:

```bash
git clone https://github.com/rlcancian/Genesys-Simulator.git
cd Genesys-Simulator/docker
```

### 2. Menu Interativo

Para acessar o menu interativo com todas as opções:

```bash
make selector
```

### 3. Build da Imagem

É necessário buildar a imagem antes de acessar outros comandos, isso pode ser feito escolhendo a opção 1 no Menu interativo ou rodando manualmente o seguinte comando:

```bash
make build_image
```

## Comandos Disponíveis

### Desenvolvimento

| Comando | Descrição | Uso |
|---------|-----------|-----|
| `make selector` | Abre menu interativo | Menu principal com todas as opções |
| `make build_image` | Constrói a imagem Docker | Necessário na primeira execução |
| `make run_debug` | Modo debug/inspeção | Acesso shell para debugging |

### Execução

| Comando | Descrição | Requisitos |
|---------|-----------|------------|
| `make run_gui` | Interface gráfica do GenESyS | Display X11 configurado |
| `make run_shell` | CLI do GenESyS | Terminal apenas |
| `make run_qt` | Qt Creator via Docker | Display X11 + desenvolvimento |

### Distribuição

| Comando | Descrição | Permissões |
|---------|-----------|------------|
| `make push_image` | Publica imagem no registry | Acesso ao registry Docker |

## Configuração Avançada

### Arquivo `config.sh`

É possível customizar as variáveis de ambiente no arquivo `config.sh`. Para utilizar diretamente o código remoto (do repositório) e não o código local, utiliza-se a variável `REMOTE=1`.:

```bash
# Se a execução é local ou remota (1 - código remoto, 0 - código local)
REMOTE=0

# Driver gráfico
MESA_LOADER_DRIVER_OVERRIDE=zink

# ...

# Nome da imagem Docker
GENESYS_IMAGE="genesys-image"

# ...

# Branch do repositório a ser utilizada
GENESYS_BRANCH=master

```

### Variáveis de Ambiente

| Variável | Padrão | Descrição |
|----------|---------|-----------|
| `REMOTE` | `0` | Usar código local (0) ou remoto (1) |
| `GENESYS_IMAGE` | `genesys-image` | Nome da imagem Docker |
| `GENESYS_BRANCH` | `master` | Branch do repositório |
| `MESA_LOADER_DRIVER_OVERRIDE` | `zink` | Driver gráfico Mesa |

## 🖥️ Execução Remota (Sem Makefile)

### Preparação

1. Exporte as variáveis desejadas:

```bash
# Nome da imagem Docker
export GENESYS_IMAGE="genesys-image"

# Driver gráfico
export MESA_LOADER_DRIVER_OVERRIDE=zink
```

2. Para fazer a inspeção da imagem:

```bash
docker run --name genesys --rm -ti --net=host --ipc=host \
    -e DISPLAY=$DISPLAY \
    -e MESA_LOADER_DRIVER_OVERRIDE=$MESA_LOADER_DRIVER_OVERRIDE \
    -e QT_X11_NO_MITSHM=1 \
    -e XDG_RUNTIME_DIR=/run/user/1001 \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    $GENESYS_IMAGE debug
```

3. Para rodar o Shell:

```bash
docker run --name genesys --rm -ti --net=host --ipc=host \
    -e DISPLAY=$DISPLAY \
    -e MESA_LOADER_DRIVER_OVERRIDE=$MESA_LOADER_DRIVER_OVERRIDE \
    -e QT_X11_NO_MITSHM=1 \
    -e XDG_RUNTIME_DIR=/run/user/1001 \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    $GENESYS_IMAGE shell
```

4. Para rodar o GUI:

```bash
docker run --name genesys --rm -ti --net=host --ipc=host \
    -e DISPLAY=$DISPLAY \
    -e MESA_LOADER_DRIVER_OVERRIDE=$MESA_LOADER_DRIVER_OVERRIDE \
    -e QT_X11_NO_MITSHM=1 \
    -e XDG_RUNTIME_DIR=/run/user/1001 \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    $GENESYS_IMAGE gui
```

5. Para rodar o QtCreator:

```bash
docker run --name genesys --rm -ti --net=host --ipc=host \
    -e DISPLAY=$DISPLAY \
    -e MESA_LOADER_DRIVER_OVERRIDE=$MESA_LOADER_DRIVER_OVERRIDE \
    -e QT_X11_NO_MITSHM=1 \
    -e XDG_RUNTIME_DIR=/run/user/1001 \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    $GENESYS_IMAGE qt
```

## Diferença entre os Modos de Operação

### Modo Local (`REMOTE=0`)
- Utiliza código fonte local para desenvolvimento
- Mudanças refletidas imediatamente
- Ideal para desenvolvimento ativo

### Modo Remoto (`REMOTE=1`)
- Utiliza código diretamente do repositório
- Sempre atualizado com a versão mais recente
- Ideal para produção e testes

## Solução de Problemas com o Docker

### Problemas Gráficos

```bash
# Verificar se X11 está funcionando
echo $DISPLAY
xauth list

# Permitir conexões X11 (temporário)
xhost +local:docker
```

### Problemas de Permissão

```bash
# Verificar se o usuário está no grupo docker
groups $USER

# Adicionar usuário ao grupo docker
sudo usermod -aG docker $USER
```

### Problemas de Memória

```bash
# Verificar uso de memória
docker stats

# Limpar containers parados
docker container prune
```

## Estrutura do Projeto

```
docker/
├── Dockerfile              # Definição da imagem
├── Makefile                # Comandos automatizados
├── config.sh              # Configurações personalizadas
├── scripts/
│       ├── build.sh
│       ├── debug.sh
│       ├── entrypoint.sh
│       ├── env.sh
│       ├── gui.sh
│       ├── push.sh
│       ├── qt.sh        
│       ├── selector.sh  # Menu interativo
│       └── shell.sh
└── README.md              # Esta documentação
```