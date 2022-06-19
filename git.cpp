// git config --global user.name Vision
// git config --global user.email 123aggarwalVision@gmail.com
// git config --global user.email    => is the command to see my email set in this git bash
// git config --global user.name    => is the command to see my name set in this git bash
// git init   =>  command to initialize the git repository

// ls -lart    => show all the files in my repo

// git status    => show the files to added or commited

// git add index.html   => adding the files
// git add -A      => add all the files to the staging area

// git status => command will now show me that I have made changes in my staging area and should commit them now

//  git commit   => this will open a vmeditor on initial commit and now you can type a commit message after pressing i, and then press escape , :wq, enter to exit
// TO avoid opening vmeditor each time , shortcut command is:- 
// git commit -m "Commit message"

// touch "filename"      => create empty file
// ex.  touch index.html will create an html file 


// git checkout "filename"     =>  changes the file to the last commit file like if I make changes in the index.html file and want to bring my index.html from my last commit back, I can use this command

// git checkout -f    => matches all the files to the previous commit

// git log      => this command shows the previous commits

// git log -p -5     => this will show my last five commits with all the changes made in every commit

// ----------------q key is used to quit from the present command ----------------
// clear  => clear the terminal

// git diff    => compares my working tree with the staging area

// git diff --staged     => will compare my staging area with the last commit

// git commit -a -m "commit message"   => this will add all my files to staging area and commit them in one command

// git status -s    => shows summarized status with green M showing staging area and red M showing working tree


// git rm   => delete the file from working directory as well as working tree
// git rm --cached  => delete the file from working directory only

// ----------------------------------- gitignore file  => see codewithharry tutorial at 39:00 minutes

// ------------------------ Branches ----------------------- // //
// Master branch is the default main branch of my repo

// git branch   => show the branches in my repo
// git branch "branch name"   => will make a new branch
// ex. git branch feature1 will make a new branch of name feature1

// git checkout feature1    => switched to feature1 branch

// Now you can make changes in feature1 branch without affecting master branch and if your changes are good for project, you can use merge command

// git checkout -b feature2   => creates a new branch feature2 and switch to this new branch


// git remote
// git remote -v    => tells url from where to push and fetch
// git push origin master  => push master branch in origin