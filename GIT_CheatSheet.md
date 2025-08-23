# 📝 Git Cheat Sheet for C++ Projects  

This cheat sheet covers the **most useful Git commands & workflows** for managing your C++ learning repo.  

---

## 🔧 Setup  
```bash
git init                      # Initialize a repo in current folder  
git clone <url>               # Clone an existing GitHub repo  
git remote -v                 # Check remotes  
git remote add origin <url>   # Connect local repo to GitHub
```
## 📂 Tracking Files
```bash
git status        # Show changes (staged, unstaged, untracked)  
git add <file>    # Stage a specific file  
git add .         # Stage all files  
git reset <file>  # Unstage a file (keep changes)
```
## 💾 Committing
```bash
git commit -m "Message"       # Commit staged changes  
git log                       # Show commit history  
git diff                      # Show unstaged changes  
git diff --staged             # Show staged changes
```
## 🌿 Branching & Merging
### Create & Switch
```bash
git branch <name>             # Create branch  
git checkout <name>           # Switch to branch  
git checkout -b <name>        # Create & switch  
```
### Merge Workflow
```bash
git checkout main             # Switch to main  
git pull origin main          # Update main  
git merge <branch>            # Merge branch into main  
```
### Delete Branches
```bash
git branch -d <name>          # Delete local branch  
git push origin --delete <name> # Delete remote branch  
```
## ☁️ Pushing & Pulling
```bash
git push -u origin <branch>   # Push new branch to GitHub  
git push                      # Push changes  
git pull                      # Fetch + merge latest from remote  
```
## ✅ Pull Request Workflow (GitHub UI)
1.	Push your branch
2. 	On GitHub → open a Pull Request (PR).
3.	Compare: base = main ⬅ compare = your-branch.
4.	Review your changes.
5.	Approve (you can approve your own PR).
6.	Click Merge Pull Request → Confirm Merge.
7.	(Optional) Delete branch on GitHub.
8.	Locally, clean up:
    ```bash
    git checkout main
    git pull origin main
    git branch -d <branch>
    ```
## 🧹 Undo / Cleanup
```bash
git reset HEAD <file>         # Unstage a file  
git restore <file>            # Discard changes in file (newer Git)  
git checkout -- <file>        # Discard changes in file (older Git)  
git clean -f                  # Remove untracked files  
git clean -fd                 # Remove untracked files + dirs  
```
## 🚨 Pro Tips
- Always git pull before starting new work.
- Use branches for every new program or feature.
- Commit often with clear messages.
- Keep main clean and working.