markdown
# Git and GitHub Tutorial

## Terminology
Git users have a unique terminology:
- **Repository**: A collection of files and directories stored together. Similar to a folder but can also contain other repositories.
- **Branch**: An "alternative timeline" for your code changes.

## Checking Your Git Version
To check your Git version, run the following command in your terminal:

```sh
git --version
This command displays the version of Git installed on your system.

Repository
A repository is a collection of files and directories stored together. It is similar to a folder but also includes Git-specific elements that help manage and track your code.

To check the current state of your repository, use:

sh
git status
Not all folders are tracked by Git. Only those initialized as repositories will be tracked.

Configuring Git
GitHub has several settings you can configure, such as your username and email. These settings are stored in a Git config file and can be global or repository-specific.

To set your email and username globally, use:

sh
git config --global user.email "your-email@example.com"
git config --global user.name "Your Name"
To check your config settings, use:

sh
git config --list
Creating a Repository
To create a new repository, initialize a new folder with Git tracking:

sh
git init
This command creates a .git directory in your project folder.

Commit
A commit saves your changes to the repository, similar to a snapshot of your code at a specific time. Use the following commands to commit your changes:

sh
git add <file> <file2>
git commit -m "commit message"
The -m flag adds a commit message describing your changes.

Complete Git Flow
The basic Git workflow involves:

Initializing a repository: git init
Adding files to the staging area: git add <file> <file2>
Committing changes: git commit -m "commit message"
Pushing changes to GitHub: git push
Staging
Staging allows you to prepare files for a commit. Use the following commands to stage and check the status of your files:

sh
git add <file> <file2>
git status
Logs
To view the history of your repository, use:

sh
git log
To make the log output more compact, use the --oneline flag:

sh
git log --oneline
Atomic Commits
Atomic commits ensure each commit is a self-contained unit of work, allowing you to revert to a previous commit if needed.

Changing the Default Code Editor
To change the default code editor to VSCode, use:

sh
git config --global core.editor "code --wait"
.gitignore
A .gitignore file tells Git which files and directories to ignore. Create a .gitignore file and list the files and directories to ignore:

Example .gitignore file:

bash
node_modules
.env
.vscode
This prevents Git from tracking the specified files and directories.

Conclusion
In this section, we learned the basics of Git, including how to check the version, configure settings, create a repository, commit changes, and use essential commands like add, commit, and log. By understanding these basics, you can effectively use Git to manage your code.