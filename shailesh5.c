<!DOCTYPE html>
<html>
<head>
    <title>Task 4 - HTML Form</title>
</head>
<body>
    <h1>Student Registration Form</h1>
    <form>
        <label>Name:</label>
        <input type="text" name="name"><br><br>

        <label>Gender:</label>
        <input type="radio" name="gender" value="Male"> Male
        <input type="radio" name="gender" value="Female"> Female<br><br>

        <label>Hobbies:</label>
        <input type="checkbox" name="hobby" value="Reading"> Reading
        <input type="checkbox" name="hobby" value="Sports"> Sports
        <input type="checkbox" name="hobby" value="Music"> Music<br><br>

        <label>Class:</label>
        <select name="class">
            <option>1st</option>
            <option>2nd</option>
            <option>3rd</option>
        </select><br><br>

        <input type="submit" value="Submit">
        <input type="reset" value="Reset">
    </form>
</body>
</html>