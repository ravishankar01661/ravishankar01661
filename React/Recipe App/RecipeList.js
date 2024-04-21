import React from 'react';

function RecipeList ({recipes}) {
    return (
        <div>
            <h2>Recipes</h2>
            <ul>
                {recipes.map((recipe) => (
                    <li key={recipe.id}>{recipe.name}</li>
                ))}
            </ul>
        </div>
    );
}

export default RecipeList;