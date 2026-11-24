# 🏊 InventoryWaterOn – Inventário Liberado na Água para DayZ

Mod de **scripts (Enforce Script)** para **DayZ Standalone** que permite ao jogador **usar o inventário e pegar itens nas mãos enquanto está nadando**, algo que o jogo vanilla restringe.

---

## ✨ Funcionalidades

- 🔓 **Libera o inventário** quando o jogador começa a nadar
- ✋ **Permite receber itens nas mãos** enquanto o jogador está nadando
- 🧩 Usa `modded class`, sem substituir arquivos vanilla

---

## ⚙️ Como funciona

O mod estende a classe `PlayerBase`:

| Método | Comportamento |
|---|---|
| `OnCommandSwimStart()` | Chama `UnlockInventory(LOCK_FROM_SCRIPT)` ao entrar na água |
| `OnCommandSwimFinish()` | Chama `LockInventory(LOCK_FROM_SCRIPT)` ao sair da água |
| `CanReceiveItemIntoHands()` | Retorna `true` quando `IsSwimming()` é verdadeiro; caso contrário, usa a lógica padrão |

---

## 📁 Estrutura do projeto

```
InventoryWaterOn/
├── config.cpp
└── scripts/
    └── 4_World/
        └── PlayerBase.c
```

> Ajuste os nomes dos arquivos conforme a estrutura real do seu projeto.

---

## 📥 Instalação

1. Empacote o mod em um `.pbo` (DayZ Tools → Addon Builder ou PBO Manager).
2. Assine o `.pbo` e coloque o `.bikey` na pasta `keys` do servidor.
3. Copie o mod para o diretório do servidor (ex.: `@InventoryWaterOn`).
4. Adicione ao parâmetro de inicialização:

```
-mod=@InventoryWaterOn
```

> O mod deve estar instalado **no servidor e nos clientes**.

---

## 🧰 Tecnologias

- Enforce Script (DayZ)
- `CfgPatches` / `CfgMods` com `worldScriptModule`
- Dependências: `DZ_Data`, `DZ_Scripts`, `DZ_Gear_Consumables`

---

## ⚠️ Compatibilidade

Este mod altera `CanReceiveItemIntoHands()` e usa `LOCK_FROM_SCRIPT`, assim como outros mods de inventário (por exemplo, bloqueio de inventário em veículos). Se usar mais de um mod que mexa nesses pontos, teste a ordem de carregamento no `-mod=`.

---

## 👤 Autor

Desenvolvido por **HF**.

