# Changelog v1.3

### Исправления
1. **Исправления в коде игры**:
   - 1.1. При старте новой игры очищается флаг начала войны из-за отказа жениться.
   - 1.2. Шаман теперь лечит при положительном ответе на соответствующий вопрос.
   - 1.3. Убрана очистка экрана при инициализации новой игры (экран очищается в начале хода).
   - 1.4. Исправлено переполнение буфера при использовании `scanf`.

### Изменения
2. **Геймплей и интерфейс**:
   - 2.1. Убраны не влияющие на игру вопросы о новогоднем бале.
   - 2.2. Удалены просьбы королевы без игровых последствий.
   - 2.3. Сообщение о смерти королевы больше не требует ответа о впуске гонца.
   - 2.4. Норма зерна: 70% от необходимого для избежания революции.
   - 2.5. Убрано предупреждение о революции при норме зерна ≥70% и <100%.
   - 2.6. Цены генерируются в начале хода, а не при торговле.
   - 2.7. Биржевые цены выводятся автоматически в начале хода.
   - 2.8. Добавлено автосохранение перед каждым ходом (кроме первого). Ручное сохранение отсутствует.
   - 2.9. Обновлена заставка и информация о версии.
   - 2.10. Добавлен Win32-исполняемый файл (собран через Tiny C Compiler).
   - 2.17. Выравнивание чисел в таблице цен по правому краю.
   - 2.18. В таблице биржи указано максимальное количество товаров для покупки.
   - 2.25. Упрощено сообщение о мобилизации: "Мобилизовано ... человек."

3. **Технические улучшения**:
   - 2.11. Новый парсер командной строки.
   - 2.12. Параметр `vanilla` для активации оригинального режима (новогодний бал, 100% норма зерна и т.д.).
   - 2.13. Отображение статуса "ванильного" режима в меню.
   - 2.14. Загрузка игры через указание пути к файлу (например, `SAVE\2.SAV`).
   - 2.15. Параметр `noautosave` для отключения автосохранения.
   - 2.16. Отображение статуса автосохранения в меню.
   - 2.19. Унификация функций вывода информации.
   - 2.20. Заставку можно пропустить нажатием любой клавиши.
   - 2.21. Автоматическое создание каталога `SAVE`.
   - 2.23. Параметр `loadlast` для загрузки последнего автосохранения.
   - 2.30. Новая функция обработки нажатий клавиш (поддержка курсорных клавиш в DOS/Windows).
   - 2.34. Параметр `new` для запуска новой игры.
   - 2.35. Исправлены орфографические ошибки.
   - 2.36. Добавлено склонение слов в интерфейсе.

---

### Bug Fixes
1. **Code Improvements**:
   - 1.1. Reset "war start flag" when starting a new game (triggered by marriage refusal).
   - 1.2. Shaman now heals if the player agrees to their question.
   - 1.3. Removed redundant screen clear during new game initialization.
   - 1.4. Fixed buffer overflow in `scanf`.

### Changes
2. **Gameplay & UI**:
   - 2.1. Removed non-functional New Year's Ball questions.
   - 2.2. Removed Queen's requests (no gameplay impact).
   - 2.3. Removed "allow messenger?" prompt after Queen's death message.
   - 2.4. Food allocation: 70% of required grain to avoid revolution.
   - 2.5. No revolution warning if grain ≥70% and <100%.
   - 2.6. Prices generated at the start of each turn (not during trading).
   - 2.7. Stock prices are auto-displayed at the start of each turn.
   - 2.8. Added autosave before every turn (except first). No manual save.
   - 2.9. Updated splash screen and version info.
   - 2.10. Added Win32 executable (compiled via Tiny C Compiler).
   - 2.17. Right-aligned numbers in price tables.
   - 2.18. Price tables now show maximum purchasable quantities.
   - 2.25. Simplified mobilization message: "Mobilized ... people."

3. **Technical Enhancements**:
   - 2.11. New command-line parser.
   - 2.12. `vanilla` parameter to enable original mechanics (e.g., 100% grain norm).
   - 2.13. "Vanilla mode" status shown in the main menu.
   - 2.14. Load games via file path (e.g., `SAVE\2.SAV`).
   - 2.15. `noautosave` parameter to disable autosave.
   - 2.16. Autosave status displayed in the main menu.
   - 2.19. Unified info-display functions.
   - 2.20. Splash screen skippable with any key press.
   - 2.21. Auto-create `SAVE` directory if missing.
   - 2.23. `loadlast` parameter to load the latest autosave.
   - 2.30. Improved key-press handling (supports arrow keys in DOS/Windows).
   - 2.34. `new` parameter to start a new game.
   - 2.35. Fixed typos.
   - 2.36. Added proper word declension in UI.