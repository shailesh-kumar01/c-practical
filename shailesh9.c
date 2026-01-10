<!DOCTYPE html>
<html>
<head>
    <title>Task 8 - CSS Selectors</title>
    <style>
        /* Universal selector */
        * { font-family: Arial; }

        /* Class selector */
        .highlight { color: red; }

        /* ID selector */
        #unique { font-size: 20px; }

        /* Descendant selector */
        div p { color: blue; }

        /* Group selector */
        h1, h2 { text-align: center; }
    </style>
</head>
<body>
    <h1>Heading 1</h1>
    <h2>Heading 2</h2>
    <p class="highlight">This is a class selector example.</p>
    <p id="unique">This is an ID selector example.</p>
    <div>
        <p>This paragraph is inside a div (descendant selector).</p>
    </div>
</body>
</html>