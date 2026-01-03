📄 Plagiarism Detection System in C

Language: C
Files: Single source file (plagiarism.c)

A C console application that analyzes the similarity between two text inputs to detect potential plagiarism. The program counts words, finds common words, and calculates a similarity percentage to estimate plagiarism risk.

⸻

💡 Project Overview

This project provides a simple text-based plagiarism detection tool:
	•	Converts text to lowercase for case-insensitive comparison.
	•	Counts the total number of words in each input text.
	•	Finds the number of common words between the texts.
	•	Calculates a similarity score (%) using the formula:
\text{Similarity} = \frac{2 \times \text{Common Words}}{\text{Total Words in Text1 + Text2}} \times 100
	•	Classifies plagiarism risk as:
	•	High (similarity > 70%)
	•	Moderate (similarity 40–70%)
	•	Low (similarity < 40%)

This provides a basic AI-inspired textual comparison tool suitable for educational purposes or small-scale plagiarism checks.

⸻

🛠 Features
	•	Case-insensitive word matching
	•	Word counting for both texts
	•	Calculates common words and similarity percentage
	•	Provides risk classification: Low, Moderate, High
	•	Simple console interface for user input

⸻

⚙️ How It Works
	1.	User inputs two pieces of text.
	2.	The program converts both texts to lowercase.
	3.	Counts words in each text.
	4.	Identifies common words between the texts.
	5.	Computes plagiarism similarity as a percentage.
	6.	Outputs a plagiarism risk level.

⸻

🏃 Usage
	1.	Compile the program:
  gcc plagiarism.c -o plagiarism
  	2.	Run the program:
    ./plagiarism
    	3.	Input the two texts when prompted.
	4.	View the word counts, similarity, and plagiarism risk.

⸻

📌 Notes
	•	Works best for short to medium-length texts.
	•	Compares exact word matches, does not handle synonyms or paraphrasing.
	•	Intended for educational or demonstration purposes, not for legal plagiarism assessment.

⸻

⚡ Author

Shubhi Gupta – Developed as a college-level C programming project demonstrating string manipulation and text comparison techniques.
