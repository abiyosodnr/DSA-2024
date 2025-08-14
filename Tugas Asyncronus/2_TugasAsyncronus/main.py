# Recreate the diagram with fixed edges handling conditions properly
diagram = Digraph("ActivityDiagram", format="png")
diagram.attr(rankdir="TB", size="8,10")

# Common Start and End Nodes
diagram.node("Start", shape="circle", label="Start")
diagram.node("End", shape="circle", label="End")

# Use Case: Daftar
diagram.node("OpenApp", shape="box", label="Open Application")
diagram.node("ChooseRegister", shape="box", label="Choose 'Register'")
diagram.node("FillForm", shape="box", label="Fill Registration Form\n(Name, Email, Password)")
diagram.node("VerifyData", shape="diamond", label="Verify Data")
diagram.node("SuccessRegister", shape="box", label="Show 'Registration Successful'")
diagram.node("EmailExists", shape="box", label="Show 'Email Already Registered'")

# Use Case: Login
diagram.node("ChooseLogin", shape="box", label="Choose 'Login'")
diagram.node("FillLogin", shape="box", label="Enter Email & Password")
diagram.node("VerifyCredentials", shape="diamond", label="Verify Credentials")
diagram.node("LoginSuccess", shape="box", label="Allow Access to App")
diagram.node("WrongPassword", shape="box", label="Show 'Wrong Password'")

# Use Case: Fitur Penyimpanan User
diagram.node("AccessProfile", shape="box", label="Access Profile")
diagram.node("UpdateProfile", shape="box", label="Update Profile")
diagram.node("SaveData", shape="diamond", label="Save Data to Database")
diagram.node("SaveSuccess", shape="box", label="Data Saved Successfully")
diagram.node("SaveFailed", shape="box", label="Show 'Failed to Save Data'")

# Connections for "Daftar"
diagram.edge("Start", "OpenApp")
diagram.edge("OpenApp", "ChooseRegister")
diagram.edge("ChooseRegister", "FillForm")
diagram.edge("FillForm", "VerifyData")
diagram.edge("VerifyData", "SuccessRegister", label="Yes")
diagram.edge("VerifyData", "EmailExists", label="No")
diagram.edge("SuccessRegister", "End")
diagram.edge("EmailExists", "End")

# Connections for "Login"
diagram.edge("OpenApp", "ChooseLogin")
diagram.edge("ChooseLogin", "FillLogin")
diagram.edge("FillLogin", "VerifyCredentials")
diagram.edge("VerifyCredentials", "LoginSuccess", label="Correct")
diagram.edge("VerifyCredentials", "WrongPassword", label="Incorrect")
diagram.edge("LoginSuccess", "End")
diagram.edge("WrongPassword", "End")

# Connections for "Fitur Penyimpanan User"
diagram.edge("LoginSuccess", "AccessProfile")
diagram.edge("AccessProfile", "UpdateProfile")
diagram.edge("UpdateProfile", "SaveData")
diagram.edge("SaveData", "SaveSuccess", label="Success")
diagram.edge("SaveData", "SaveFailed", label="Failure")
diagram.edge("SaveSuccess", "End")
diagram.edge("SaveFailed", "End")

# Render the diagram
file_path = "/mnt/data/ActivityDiagram"
diagram.render(file_path, format="png", cleanup=True)

file_path + ".png"
