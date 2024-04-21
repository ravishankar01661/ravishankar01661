import React, {useState} from 'react';
import RecipeList from './RecipeList';
import RecipeDetails from './RecipeDetails';
import RecipeForm from './RecipeForm';
import ReactDOM from 'react-dom/client';
import App1 from './App';

const initialRecipes = [
    {
    id: 1,
    name: 'Spaghetti Bolognese',
    description: 'Classic Intalian meat sauce with spaghetti pasta.',
    ingredients: ['ground beef', 'tomatoes', 'onions', 'garlic', 'herbs'],
    instructions: [
      'Cook the ground beef and drain excess fat.',
      'Sauté the onions and garlic.',
      'Add the tomatoes and herbs, and simmer for 30 minutes.',
      'Cook the spaghetti according to package instructions.',
      'Serve the sauce over the spaghetti.',
    ],
},

]

function App() {
    const [recipes, setRecipes] = useState(initialRecipes);
    const [selectedRecipe, setSelectedRecipe] = useState(null);

    const handleRecipeSelect = (recipe) => {
        setSelectedRecipe(recipe);
    };

    return (
        <div>
            <h1>Welcome to the Recipe App</h1>
        {setSelectedRecipe ? (
            <RecipeDetails recipe={selectedRecipe} />
        ) : (
            <RecipeList recipe={recipes} onrecipeSelect={handleRecipeSelect} />
        ) }
        </div>
    );
}

const container = document.getElementById('root');
const root = ReactDOM.createRoot(container);
root.render();

export default App;