import React, { useState } from 'react';

const Form = () => {
    const [name, setName] = useState('');
    const [email, setEmail] = useState('');

    const handleNameChange = (e) => {
        setName(e.target.value);
    };

    const handleEmailChange = (e) => {
        setEmail(e.target.value);
    };

    const handleSubmit =(e) => {
        e.preventDefault();
        console.log('Name:', name);
        console.log('Email:', email);
    };


  return (
    <form onSubmit = {handleSubmit}>
        <div>
            <label htmlFor="name">Name:</label>
            <input type="text" id="name" value={name} onChange={handleNameChange} />
        </div>
        <div>
            <label htmlFor="email">Email:</label>
            <input type="email" id="email" value={email} onChange={handleEmailChange} />
        </div>
        <button type="submit">Submit</button>
    </form>
  );
};

export default Form;
