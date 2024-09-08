// Returns a random DNA base
const returnRandBase = () => {
  const dnaBases = ['A', 'T', 'C', 'G'];
  return dnaBases[Math.floor(Math.random() * 4)];
};

// Returns a random single stand of DNA containing 15 bases
const mockUpStrand = () => {
  const newStrand = [];
  for (let i = 0; i < 15; i++) {
    newStrand.push(returnRandBase());
  }
  return newStrand;
};

const closestSample = (sampleArray) => {
  // find the the two samples that are most related
  let sample1;
  let sample2;
  let closest = [0];

  for(let i = 0; i < sampleArray.length; i++){
    sample1 = sampleArray[i]
    for(let j = 0; j < sampleArray.length; j++){
      sample2 = sampleArray[j];

      if(sample1.specimenNum === sample2.specimenNum){
        continue;
      }

      let comparison = sample1.compaireDNA(sample2);
      
      if(comparison > closest[0]){
        closest = [comparison, sample1, sample2]
      }
    }
  }

    return closest;
}

function pAequorFactory(specimenNum, dna) {

  let specimen = {
    specimenNum: specimenNum,
    dna: dna,
    mutate() {
      // randomly select a base in dna
      const baseInstance = Math.floor(Math.random() * 15);
      const chosenBase = this.dna[baseInstance];
      
      // change the selected base to another base
      let newBase;
      do {
        newBase = returnRandBase();
      } while(chosenBase === newBase);

      this.dna[baseInstance] = newBase
    
    },
    compaireDNA(specimen2) {
      // compaire current the specimens for how many bases are identical and in the same locations
      let commonDNA = 0;
      for(let i = 0; i < this.dna.length; i++){
        if(this.dna[i] === specimen2.dna[i])
        {
          commonDNA++;
        }
      }

      const comparison = Math.floor((commonDNA / this.dna.length) * 100);
      // print the percentage of DNA that the two objects have in common
      //console.log(`speciman #${this.specimenNum} and speciman #${specimen2.specimenNum} have ${comparison}% DNA in common`)
      return comparison;
    },
    willLikelySurvive() {

      let beneficialBase = 0;

      // Check how must of the specimens DNA is made up of beneficial bases
      for(let bases in this.dna){
        if(this.dna[bases] === "C" || this.dna[bases] === "G"){
          beneficialBase++;
        }
      }

      // If specimens DNA is made up of >= 60% beneficial bases then return true
      const beneficialPercent = Math.floor((beneficialBase / this.dna.length) * 100);
      if (beneficialPercent >= 60){
        return true;
      } else {
        return false;
      }
    },
    complementStrand() {
      let complementStrand = [];
      
      for(base in this.dna){
        switch(this.dna[base]){
          case "A":
            complementStrand.push("T");
            break;
          case "T":
            complementStrand.push("A");
            break;
          case "C":
            complementStrand.push("G");
            break;
          case "G":
            complementStrand.push("C");
            break;
          default:
            break;
        }
      }

      console.log(this.dna);
      console.log(complementStrand);
      return complementStrand;
    }
  };

  return specimen;
}

// create an array of 30 samples that are likely to survive
const survivingSamples = [];
let sampleInstance = 1
while (survivingSamples.length < 30){
  const sample = pAequorFactory(sampleInstance, mockUpStrand());

  if(sample.willLikelySurvive() === true){
    survivingSamples.push(sample);
  }
  sampleInstance++;
}


console.log(closestSample(survivingSamples));
