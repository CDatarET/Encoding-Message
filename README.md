# Encoding-Message
CodeChef Difficulty 1027 Problem.

# Message Encoder for Secure Chat (ShareChat Task)

This project is a solution to a problem where messages must be encoded in a two-step process to ensure secure communication. Inspired by Chef’s first mission at ShareChat, this encoder applies character swapping and alphabet inversion techniques.

## Problem Description

Chef needs to encode a message `S` of length `N`, which contains only lowercase English letters. The encoding consists of two sequential steps:

### Step 1: Character Swapping
- Swap the 1st and 2nd characters.
- Swap the 3rd and 4th characters.
- Continue in this pattern: swap every pair of consecutive characters.
- If the length of the string is odd, the last character remains unchanged.

### Step 2: Alphabet Inversion
- Replace each letter with its "opposite" in the alphabet:
  - `'a'` becomes `'z'`, `'b'` becomes `'y'`, ..., `'z'` becomes `'a'`.

## Input Format

- The first line contains an integer `T` — the number of test cases.
- For each test case:
  - The first line contains an integer `N` — the length of the message string.
  - The second line contains the message string `S`.

## Output Format

- For each test case, print a single line containing the encoded message.
