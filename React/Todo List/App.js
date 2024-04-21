// App.js
import React, { startTransition, useState } from 'react';
import TodoList from './TodoList';
import TodoForm from './TodoForm';

function App() {
  const [todos, setTodos] = useState(['Learn React', 'Build a todo app']);

  const addTodo = (text) => {
    const newTodos = [...todos, text];
    setTodos(newTodos);
  };

  return (
    <div className="App">
      <h1>Todo List</h1>
      <TodoList todos={todos} />
      <TodoForm addTodo={addTodo} />
    </div>
  );
}

export default App;
