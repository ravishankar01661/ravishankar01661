import React from 'react';

function RecipeDetails({recipe}) {
    return (
        <div>
            <h2>{recipe.name}</h2>
            <p>{recipe.description}</p>

            <h3>Ingredients</h3>
            <ul>
                {recipe.ingredients.map((ingredient, index) => (
                    <li key={index}>{ingredient}</li>
                ))}
            </ul>

            <h3>Instructions</h3>
            <ol>
                {RecipeList.instructions.map((instruction, index) => (
                    <li key={index}>{instruction}</li>
                ))}
            </ol>
        </div>
    );
}

export default RecipeDetails;