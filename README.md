Абстрактная фабрика - применяется для создания раззличный реализаций "семейств" объектов.
в этом проекте используется для строительства построек различних фракций в игре: альянс строит казарму альянса, а орда казармы орды... и т.д.


Билдер - служит для создания сложных объектов, обычно для создания которых, нужно несколько этапов.
В этом проекте различные реализации билдера создают различнные поля для арканоида.

Прототип - для  инкапсулирования в себе механизма клонирования объекта. В этом проекте интефейс IPrototype реализован в классе SomeActor. в нем есть публичная функция создающая копию самого себя.

Синглтон - нужен для обеспечения доступа к единственному экземпляру класса. В проекте синглтон - класс для хранения счета игры.
