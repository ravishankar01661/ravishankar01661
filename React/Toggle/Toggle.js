import React, {useState} from "react";

function Toggle() {
    const [isOn, setIsOn] = useState(false);

    return (
        <div>
            <label>
                <input type="checkbox" checked={isOn} onChange={() => setIsOn(!isOn)}/>
            </label>
        </div>
    );
}

export default Toggle;