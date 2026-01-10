<!DOCTYPE html>
<html>
<head>
    <title>Task 9 - Responsive Design</title>
    <style>
        body { font-family: Arial; }
        .container { width: 80%; margin: auto; background-color: lightgray; padding: 20px; }

        /* Mobile first */
        @media (max-width: 600px) {
            .container { background-color: lightgreen; width: 95%; }
            h1 { font-size: 18px; }
        }

        @media (min-width: 601px) {
            .container { background-color: lightblue; }
            h1 { font-size: 24px; }
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>Responsive Web Page</h1>
        <p>Resize the browser to see background color and text size change.</p>
    </div>
</body>
</html>