```markdown
# Git and GitHub Tutorial

## Terminology
Git users have a unique terminology:
- **Repository**: A collection of files and directories stored together. Similar to a folder but can also contain other repositories.
- **Branch**: An "alternative timeline" for your code changes.

## Checking Your Git Version
To check your Git version, run the following command in your terminal:

```sh
git --version
```

This command displays the version of Git installed on your system.

## Repository
A repository is a collection of files and directories stored together. It is similar to a folder but also includes Git-specific elements that help manage and track your code. 

To check the current state of your repository, use:

```sh
git status
```

Not all folders are tracked by Git. Only those initialized as repositories will be tracked.

## Configuring Git
GitHub has several settings you can configure, such as your username and email. These settings are stored in a Git config file and can be global or repository-specific.

To set your email and username globally, use:

```sh
git config --global user.email "your-email@example.com"
git config --global user.name "Your Name"
```

To check your config settings, use:

```sh
git config --list
```

## Creating a Repository
To create a new repository, initialize a new folder with Git tracking:

```sh
git init
```

This command creates a `.git` directory in your project folder.

## Commit
A commit saves your changes to the repository, similar to a snapshot of your code at a specific time. Use the following commands to commit your changes:

```sh
git add <file> <file2>
git commit -m "commit message"
```

The `-m` flag adds a commit message describing your changes.

## Complete Git Flow
The basic Git workflow involves:
1. Initializing a repository: `git init`
2. Adding files to the staging area: `git add <file> <file2>`
3. Committing changes: `git commit -m "commit message"`
4. Pushing changes to GitHub: `git push`

## Staging
Staging allows you to prepare files for a commit. Use the following commands to stage and check the status of your files:

```sh
git add <file> <file2>
git status
```

## Logs
To view the history of your repository, use:

```sh
git log
```

To make the log output more compact, use the `--oneline` flag:

```sh
git log --oneline
```

## Atomic Commits
Atomic commits ensure each commit is a self-contained unit of work, allowing you to revert to a previous commit if needed.

## Changing the Default Code Editor
To change the default code editor to VSCode, use:

```sh
git config --global core.editor "code --wait"
```

## .gitignore
A `.gitignore` file tells Git which files and directories to ignore. Create a `.gitignore` file and list the files and directories to ignore:

Example `.gitignore` file:

```
node_modules
.env
.vscode
```

This prevents Git from tracking the specified files and directories.

## Conclusion
In this section, we learned the basics of Git, including how to check the version, configure settings, create a repository, commit changes, and use essential commands like `add`, `commit`, and `log`. By understanding these basics, you can effectively use Git to manage your code.

# Git Behind the Scenes

## Git Snapshots
A Git snapshot is a point in time in the history of your code. It represents a specific version of your code, including all the files and folders that were present at that time. Each snapshot is identified by a unique hash code, a string of characters representing the contents of the snapshot.

A snapshot is not an image but a representation of the code at a specific point in time. Git stores this information in a locally stored key-value based database. Everything is stored as an object, and each object is identified by a unique hash code.

## The Three Musketeers of Git

### Commit Object
Each commit in the project is stored in the `.git` folder as a commit object, which contains the following information:
- Tree Object
- Parent Commit Object
- Author
- Committer
- Commit Message

### Tree Object
A Tree Object is a container for all the files and folders in the project. It contains the following information:
- File Mode
- File Name
- File Hash
- Parent Tree Object

Everything is stored as key-value pairs in the tree object. The key is the file name, and the value is the file hash.

### Blob Object
A Blob Object is present in the tree object and contains the actual file content. This is where the file content is stored.

## Helpful Commands
Here are some helpful commands to explore Git internals:

### Show Commit Object
```sh
git show -s --pretty=raw <commit-hash>
```

### Show Tree Object
Grab the tree id from the above command and use it in the following command to get the tree object:
```sh
git ls-tree <tree-id>
```

### Show Blob Object
Grab the blob id from the above command and use it in the following command to get the blob object:
```sh
git show <blob-id>
```

### Show Commit Object Details
Grab the commit id from the above command and use it in the following command to get the commit object:
```sh
git cat-file -p <commit-id>
```
```