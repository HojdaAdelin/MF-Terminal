# MF-Terminal
MF-Terminal or Multi Functionality Terminal is a tool terminal with a lot of commands.

# Commands
<pre>
--github         Open github website
--youtube        Open youtube website
--google         Open google on the browser
--facebook       Open facebook website
--gmail          Open gmail website
--mf             Open MF-Terminal source website
--cdefault       Set text color to white
--cred           Set text color to red
--cblue          Set text color to blue
--cgreen         Set text color to green
--caqua          Set text color to aqua
--cpurple        Set text color to purple
--main           Display the main view
--date           Add to the main view the current date
--cls            Clear the terminal
--exit           Exit terminal
--version        Display the current version
--changelog      Display version change log
--temp           Clean temp folder
--rand           Generate a random string of characters
--pass           Generate a strong password
--spass          Save generated password
--dpass          Display saved password
--vs             Open VS Code if it's installed
--sd             Shut down the pc
--rs             Restart the pc
</pre>
# Data config

In this project I decide to implement the same concept implemented in [Eleven Terminal](https://github.com/HojdaAdelin/Eleven-Terminal) which is color config.\
Colors are stored in a .cfg file and writed in the application as an operation.\
After the color is writed it will color the entire terminal app.

# Temp clean

The --temp command clean temp folder.\
Behind this command are: Path to temp, Deletion specific files & directory, skip esential files.

# Website opener

The first 6 commands open different link on the default browser.\
This concept work based on system atribute.
