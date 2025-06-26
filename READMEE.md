🎬 aybMovie_Desk

aybMovie_Desk is a simple yet complete desktop application fully built in C++, with the help of the Qt framework.
It connects .ui interface files to the .cpp and .h logic, creating a fully interactive experience tailored to user needs and offering a structured, user-friendly way to handle cinema operations.

💡 Features

    User Role Selection: Choose between Admin or Client mode, each with its own interface.

👨‍💼 Admins

    View all films

    Add, delete, modify, and clear films by ID and information

    Manual login system for administrator access

🎟️ Clients

    View film list

    Create reservations (with a global limit of 200 total reservations)

    Request reservation deletion (only handled by admins)

🛡️ Validation & Error Handling

    Empty fields and invalid data are well-handled to prevent crashes or inconsistencies.

## 🛠 Requirements

- Qt 5.x or Qt 6.x (with Qt Creator)
- C++11 or later
- Qt modules: **Core, GUI, Widgets, SQL**

How to run?

    Download and install the Qt Framework:
     https://www.qt.io/download-dev

    Open the project inside Qt Creator.

    Build and run the app within the IDE.
