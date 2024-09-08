# Codecadmey Challenge Project: Mysterious Organism
This project has me take the role of a member of a research team that has found a new organism. This orgamism is only comprised of 15 DNA bases. Due to the environment it lives in the DNA samples and frequency mutate making specimens hard to study. My role within this team is to create objects that simulate the DNA of the new organism so that the rest of the team may study them.

# Project Goals
The goal of this project is to get familiure with the use of objects within JavaScript

# Project Support
Th starter code provided the two helper functions: 

<ul>
    <li><code>returnRandBase()</code> will randomly select a base and return the base (<code>'A'</code>, <code>'T'</code>, <code>'C'</code>, or <code>'G'</code>)</li>
    <li><code>mockUpStrand()</code> is used to generate an array containing 15 bases to represent a single DNA string with 15 bases.</li>
</ul>

# Project Requirements
<ul>
    <li>The factory function <code>pAequorFactory()</code> that takes two parameters, the first parameter is a number (not two organisms should have the same number), the second parameter is an array of 15 DNA bases. The fuction returns an object that contains the properites <code>specimenNum</code> and <code>dna</code> that correspond to the parameters provided.</li>
    <li>The method <code>.mutate()</code> in <code>pAequorFactory()</code> is used to select a base in the object's <code>dna</code> property and changing the current base to a different base. Then return the object's <code>dna</code>.</li>
    <li>The method <code>.compareDNA()</code> in <code>pAequorFactory()</code> is used to compare the current objects <code>.dna</code> to another objects <code>dna</code> and compute how many bases are identical and in the same locations. This method will result in a printed message that states the percantage of the <code>dna</code> the two objects have in common.</li>
    <li>The method <code>.willLikelySurvive()</code> evaluates <code>.dna</code> to see if the array contains at least 60% <code>'C'</code> or <code>'G'</code> bases. This method returns <code>true</code> if it does and <code>false</code> if it does not.</li>
    <li>An array of 30 instance of the object that can survive must be stored.</li>
    <li>The method <code>.complementStrand()</code> returns the complementary DNA strand for the generated object.</li>
    <li>Use the method <code>.compareDNA()</code> to find the two most related instances of the generated objects.</li>
</ul>
