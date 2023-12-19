#batch rename from *.foo -> *.bar
#for f in *.foo; do mv -- "$f" "${f%.foo}.bar"; done

echo "No. of lines in .h ::"
cd ./src
awk 'END {print NR}' *.h
echo "No. of lines in .c ::"
awk 'END {print NR}' *.c
echo ""
#echo "No. of lines in Makefile"
#awk 'END {print NR}' Makefile
#echo ""
#echo "No. of lines in md"
#awk 'END {print NR}' *.md
#echo ""


cd ..
ssh -T git@github.com
git add .
git remote set-url origin git@github.com:nooransari911/DSA2.git
echo "Enter commit message:"
read commit_message
echo ""
echo "Starting commit;"
git commit -m "$commit_message"
echo ""
echo "Starting push;"
git push -u origin main
