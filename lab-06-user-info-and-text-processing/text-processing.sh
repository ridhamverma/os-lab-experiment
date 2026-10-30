#!/bin/bash
set -e

# Temporary sample files keep repeated runs separate from your own files.
practice_dir=$(mktemp -d)
trap 'rm -rf -- "$practice_dir"' EXIT

cat > "$practice_dir/sample.txt" <<'EOF'
Linux is an operating system.
Shell scripting is useful.
Text processing is important.
EOF
filename="$practice_dir/sample.txt"

printf 'File Contents:\n'
cat "$filename"
printf '\nNumber of Lines: '
wc -l < "$filename"
printf 'Number of Words: '
wc -w < "$filename"
printf 'Number of Characters: '
wc -m < "$filename"

printf '\nFirst line:\n'
sed -n '1p' "$filename"
printf '\nSecond line:\n'
sed -n '2p' "$filename"
printf '\nThird line:\n'
sed -n '3p' "$filename"

search_word="Linux"
printf '\nSearching for the word: %s\n' "$search_word"
if grep -n "$search_word" "$filename"; then
    echo 'Search completed.'
else
    echo 'Word not found.'
fi

printf '\nOriginal Text:\n'
cat "$filename"
printf '\nModified Text:\n'
sed 's/Linux/Ubuntu/g' "$filename"

cat > "$practice_dir/duplicate.txt" <<'EOF'
Apple
Banana
Apple
Mango
Banana
Orange
EOF
printf '\nOriginal Lines:\n'
cat "$practice_dir/duplicate.txt"
printf '\nUnique Lines:\n'
sort -u "$practice_dir/duplicate.txt"

cat > "$practice_dir/fruits.txt" <<'EOF'
Mango
Apple
Orange
Banana
EOF
printf '\nOriginal File:\n'
cat "$practice_dir/fruits.txt"
printf '\nSorted File:\n'
sort "$practice_dir/fruits.txt"
