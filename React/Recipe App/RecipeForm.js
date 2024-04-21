import React, {useState} from 'react';

function RecipeForm({onSubmitRecipe}){
    const [name, setname] = useState('');
    const [description, setDescription] = useState('');
    const [ingredients, setIngredients] = usestate(['']);
    const [instructions, setInstructions] = useState(['']);

    const handleSubmit = (e) => {
        e.preventDefault();
        const newRecipe = {
            name,
            description,
            ingredients,
            instructions
        };
        onSubmitRecipe(newRecipe);
        setname('');
        setDescription('');
        setIngredients(['']);
        setInstructions(['']);
    };

    const handleNameChange = (e) => {
        setName(e.target.value);
      };
    
      const handleDescriptionChange = (e) => {
        setDescription(e.target.value);
      };
    
      const handleIngredientChange = (e, index) => {
        const newIngredients = [...ingredients];
        newIngredients[index] = e.target.value;
        setIngredients(newIngredients);
      };
    
      const handleAddIngredient = () => {
        setIngredients([...ingredients, '']);
      };
    
      const handleInstructionChange = (e, index) => {
        const newInstructions = [...instructions];
        newInstructions[index] = e.target.value;
        setInstructions(newInstructions);
      };
    
      const handleAddInstruction = () => {
        setInstructions([...instructions, '']);
      };

    return (
        <form onSubmit={handleSubmit}>
            <div>
                <label htmlFor="name">Name:</label>
                <input 
                type="text"
                id="name"
                value={name}
                onChange={handleNameChange}
                 />
            </div>

            <div>
                <label htmlFor="description">Description:</label>
                <textarea 
                 id="description"
                 value={description}
                 onChange={handleDescriptionChange}
                 />
            </div>

            <div>
                <label>Ingredients:</label>
                {ingredients.map((ingredient, index) =>(
                    <div key={index}>
                        <input 
                        type="text"
                        value={ingredient}
                        onChange={(e) => handleIngredientChange(e, index)}
                         />
                    </div>
                ))}
                  <button type="button" onClick={handleAddIngredient}>Add Ingredient
                  </button>
            </div>

            <div>
                <label htmlFor="Instructions:"></label>
                {instructions.map((instructio, index) => (
                    <div key={index}>
                        <textarea
                        value={instruction}
                        onChange={(e) =>handleInstructionChange(e, index)}
                        />
                        </div>
                ))}
                <button type="button"onClick={handleAddInstruction}>Add Instruction</button>
            </div>
            <button type="submit">Submit Recipe:</button>
        </form>
    );
}

export default RecipeForm;