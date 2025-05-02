# Королевство Эйфория / Kingdom of Euphoria

«Королевство Эйфория» — классическая текстовая стратегия, где игрок выступает в роли правителя небольшого королевства, управляя ресурсами (деньги, золото, солдаты, крестьяне, еда, земля) и принимая решения в условиях непредсказуемых событий: нападений врагов, бунтов, неурожаев или краж из казны. Цель — удержать власть как можно дольше, балансируя между торговлей, войнами, дипломатией и внутренней стабильностью.

Игра, созданная в 1986 году в России для компьютеров БК-010 на языке Focal, позже портирована на Basic и стала культовой в 1990-х среди пользователей ПК серий ДВК и УК-НЦ. Современные ремейки сделали игру доступной на платформах Windows, MS-DOS, iOS и Android на английском и русском языках.

---

"Kingdom of Euphoria" is a classic text strategy game where the player acts as the ruler of a small kingdom, managing resources (money, gold, soldiers, peasants, food, land) and making decisions in the face of unpredictable events: enemy attacks, riots, crop failures or thefts from the treasury. The goal is to hold on to power as long as possible, balancing between trade, wars, diplomacy and internal stability.

The game, created in 1986 in Russia for BK-010 computers in the Focal language, was later ported to Basic and became a cult classic in the 1990s among users of the DVK and UK-NC PC series. Modern remakes have made the game available on Windows, Dos, iOS and Android platforms in English and Russian

---

> [!WARNING]
> **Внимание**: Исходный код, представленный в этом репозитории был взят с сайта [old-dos.ru](http://old-dos.ru/games/file_731.html)

---

# Параметры командной строки / Command Line Parameters

## 1. Основные параметры / Main Parameters

| Параметр / Parameter                     | Описание / Description                                                                 |
|------------------------------------------|---------------------------------------------------------------------------------------|
| `no` или `nointro`                       | Отключает вступительную заставку. / Disables the intro animation.                     |
| `vanilla`, `orig`, `original`            | Активирует оригинальный режим игры: / Enables original gameplay mode:                 |
|                                          | - Вопросы о новогоднем бале; / New Year's ball questions;                             |
|                                          | - Просьбы королевы; / Queen's requests;                                               |
|                                          | - Норма зерна 100%; / Grain norm set to 100%;                                         |
|                                          | - Ручное распределение зерна каждый ход. / Manual grain distribution every turn.      |
| `noautosave`                             | Отключает автосохранение. / Disables autosave.                                        |
| `[имя_файла]` (с расширением, например `SAVE\2.SAV`) | Загружает сохранённую игру. / Loads a saved game (file extension required).           |
| `loadlast`                               | Загружает последнее автосохранение. / Loads the latest autosave file.                |
| `new` или `newgame`                      | Начинает новую игру, пропуская главное меню. / Starts a new game, skipping the main menu. |

## 2. Примечания / Notes

- **Регистр не важен** / **Case-insensitive**:  
  Параметры можно вводить в любом регистре (например, `NOINTRO` = `NoIntro`).  
  Parameters can be typed in any case (e.g., `NOINTRO` = `NoIntro`).

- **Префиксы** / **Prefixes**:  
  Параметры (кроме имени файла) могут начинаться с `/` или `-`. Например:  
  Parameters (except filenames) can start with `/` or `-`. For example:  
  ```bash
  EIFORIA.EXE -nointro /original
  ```

- **Автосохранение** / **Autosave**:
  При использовании `loadlast` игра ищет самый новый файл автосохранения в папке `SAVE` и её подпапках.
  When using `loadlast`, the game searches the `SAVE` folder and subfolders for the latest autosave.

## 3. Примеры использования / Examples

### 3.1. Запуск без заставки в оригинальном режиме / Skip intro in vanilla mode

```bash
EIFORIA.EXE no vanilla
# или / or:
EIFORIA.EXE -nointro -orig
# или / or:
EIFORIA.EXE /nointro /original
```

### 3.2. Загрузка сохранения / Load a saved game

```bash
EIFORIA.EXE SAVE\2.SAV
```

### 3.3. Загрузка последнего автосохранения / Load the latest autosave

```bash
EIFORIA.EXE loadlast
# или / or:
EIFORIA.EXE -loadlast
```


