# Flashcards App

This Flashcards App is a React-based quiz application that leverages Redux and Redux Toolkit for state management. It allows users to create topics, quizzes, and flashcards, providing an interactive platform to study and test knowledge.

## Table of Contents

- [Project Overview](#project-overview)
- [Project Goals](#project-goals)
- [Setup Instructions](#setup-instructions)
- [Project Requirements](#project-requirements)
- [State Structure](#state-structure)
- [Acknowledgements](#acknowledgements)

## Project Overview

The Flashcards App enables users to manage topics, quizzes, and flashcards through a user-friendly interface. Key features include:

- **Topic Management**: Create and view topics, each associated with multiple quizzes.
- **Quiz Management**: Create quizzes under specific topics, each containing multiple flashcards.
- **Flashcard Interaction**: Flip flashcards to view both questions and answers.

This project was developed as part of Codecademy's Full-Stack Engineer curriculum, aiming to apply concepts learned in React-Redux and Redux Toolkit. citeturn0search1

## Project Goals

The primary objectives of this project are:

- Utilize Redux and Redux Toolkit to manage complex state.
- Implement features for creating and managing topics, quizzes, and flashcards.
- Enable interactive quiz-taking with flashcard flipping functionality.

These goals align with the requirements set forth in Codecademy's Flashcards Challenge Project, which serves as the foundation for this application.

## Setup Instructions

To set up and run the Flashcards App locally, follow these steps:

1. **Clone the Repository**:

   ```bash
   git clone https://github.com/AlasdairAnderson/Flashcards.git
   ```


2. **Navigate to the Project Directory**:

   ```bash
   cd Flashcards
   ```


3. **Install Dependencies**:

   Ensure you have Node.js installed. Then, install the project dependencies:

   ```bash
   npm install
   ```


4. **Start the Development Server**:

   Launch the app in development mode:

   ```bash
   npm start
   ```


   This will open the app in your default browser at [http://localhost:3000](http://localhost:3000).

## Project Requirements

The Flashcards App meets the following requirements:

1. **Routing and Pages**:

   - **`/topics/new`**: Form to create new topics.
   - **`/topics`**: View all topics; click a topic to view its quizzes.
   - **`/topics/:topicId`**: View a specific topic and its quizzes.
   - **`/quizzes/new`**: Form to create new quizzes associated with topics.
   - **`/quizzes`**: View all quizzes; click a quiz to take it.
   - **`/quizzes/:quizId`**: Take a specific quiz and flip through its flashcards.

2. **State Management**:

   The app uses Redux with slices for topics, quizzes, and cards. Each slice manages its respective state, and actions are dispatched to update the state accordingly.

3. **Topic Management**:

   - Users can create topics, each with a name, icon URL, and an array of associated quiz IDs.
   - Topics are displayed on the `/topics` page, and clicking a topic navigates to its quizzes.

4. **Quiz Management**:

   - Users can create quizzes linked to specific topics, each with a name and an array of card IDs.
   - Quizzes are displayed on the `/quizzes` page, and clicking a quiz navigates to its flashcards.

5. **Flashcard Interaction**:

   - Each quiz consists of flashcards with front (question) and back (answer) text.
   - Users can flip flashcards to view answers during quizzes.

## State Structure

The app's state is normalized with three slices: topics, quizzes, and cards. Each slice's state includes an object storing items keyed by their ID, facilitating efficient data retrieval.

Example state structure:


```json
{
  "topics": {
    "topics": {
      "123": {
        "id": "123",
        "name": "Science",
        "icon": "science-icon.png",
        "quizIds": ["456", "789"]
      }
    }
  },
  "quizzes": {
    "quizzes": {
      "456": {
        "id": "456",
        "topicId": "123",
        "name": "Physics Quiz",
        "cardIds": ["101", "102"]
      }
    }
  },
  "cards": {
    "cards": {
      "101": {
        "id": "101",
        "front": "What is Newton's second law?",
        "back": "F = ma"
      },
      "102": {
        "id": "102",
        "front": "What is the speed of light?",
        "back": "299,792 km/s"
      }
    }
  }
}
```


## Acknowledgements

This project is based on the Flashcards Challenge provided by Codecademy. The challenge served as a valuable exercise in applying Redux and React-Redux concepts. For more information, refer to Codecademy's [Learn React Router](https://www.codecademy.com/learn/paths/build-web-apps-with-react-redux) course.

Additionally, the project structure and requirements were inspired by community discussions and solutions shared on the [Codecademy Forums](https://discuss.codecademy.com/t/flashcards-challenge-project-redux/576779). 
