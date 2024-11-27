
// 6. Write a function that checks if a username and password match predefined values. If the username is "admin" and the password is "1234", print "Login successful"; otherwise, print "Login failed."
function checkLogin(username, password) {
    if (username === "admin" && password === "1234") {
      console.log("Login successful");
    } else {
      console.log("Login failed");
    }
  }
  checkLogin("admin", "1234")