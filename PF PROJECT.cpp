#include <iostream>
#include <cstring>
#include <map>
using namespace std;
void titleArt();
void quizChoice();
void pakistanQuiz();
void animalQuiz();
void countryQuiz();
void gkQuiz();
void scienceQuiz();
void quizScore(map<string, string> quiz);
int main(){
	string repeat;
	titleArt();
	quizChoice();
	cout<<"Do you want to do the quiz again? Y or N. \n";
	cin>>repeat;
	if (repeat == "Y"){
		cout<<"          ----------          ";
		titleArt();
		quizChoice();
	}
}

void titleArt(){
	cout<<"             _"<<endl;
	cout<<"            (_)"<<endl;
	cout<<"  __ _ _   _ _ ____"<<endl;
	cout<<"/ _`  | | | | |_  /"<<endl;
	cout<<"| (_| | |_| | |/ /"<<endl;     
    cout<<" \__, |\__,_|_|/___|"<<endl;            
	cout<<"    | |            "<<endl;
	cout<<"    | |            "<<endl;
	cout<<"    |_|            "<<endl;
}
void quizChoice(){
	int quizNum;
	cout<<"Which quiz are you interested in? \n";
	cout<<"1). Pakistan \n2). Animals \n3). Countries \n4). Science \n5). General Knowledge\n";
	cout<<"Enter the corresponding quiz index here:- ";
	cin>>quizNum;
	cin.ignore();
	switch(quizNum){
		case 1: 
		pakistanQuiz();
		break;
		case 2: 
		animalQuiz();
		break;
		case 3:
		countryQuiz();
		break;
		case 4:
		scienceQuiz();
		break;
		case 5:
		gkQuiz();
		break;	
	}
}
void pakistanQuiz(){
	map<string, string> pakQuiz = {
		{"What was the old name of PIA? ","orient airways"},
		{"According to population, which is the largest city in Pakistan? ","karachi"},
		{"How many languages are spoken in Pakistan? ","32"},
		{"According to population, which is the smallest city of Pakistan? ","ziarat"},
		{"When Pakistan got freedom at that time how many Universities were in Pakistan? ","2"},
		{"When did Pakistan win Olympic gold medal in Hockey for the first time? ","1960"},
		{"What sea is located directly to the south of Pakistan? ","arabian sea"},
		{"Name the longest river in Pakistan? ","indus river"},
		{"Which former Pakistani cricketer is widely regarded as the greatest left-arm fast bowler in cricket history? ","wasim akram"},
		{"Malala Yousafzai is the youngest winner in history of what award? ","nobel peace prize"}
	};
	
	quizScore(pakQuiz);
	
}
void animalQuiz(){
	map<string, string> aniQuiz = {
		{"What is a group of pandas known as? ", "embarrassment"},
		{"Which fish can climb a tree? ","mudskipper"},
		{"What animal sting can kill you in less than five minutes? ","jellyfish"},
		{"How many hearts does an octopus have? ","3"},
		{"Though they sound happy, what animal's laugh is a reaction to being threatened? ","hyenas"},
		{"What gives flamingos their pink color? ","shrimp"},
		{"The age of a lion can be determined by its? ","nose"},
		{"Which sea creature can change its gender? ","oyster"},
		{"What is a polar bear's skin color? ","black"},
		{"What sea creature has the ability to clone itself? ","jellyfish"}
	};
	quizScore(aniQuiz);
}
void countryQuiz(){
	map<string, string> conQuiz = {
		{"Which country has unicorn as its national animal? ","scotland"},
		{"What country has the highest life expectancy? ","hong kong"},
		{"What country drinks the most coffee per capita? ","finland"},
		{"What country has the most islands? ","sweden"},
		{"Which country consumes the most chocolate per capita? ","switzerland"},
		{"Which country invented ice cream? ","china"},
		{"What's the smallest country in the world? ","vatican city"},
		{"How many time zones are there in Russia? ","11"},
		{"Which country has the greatest number of natural lakes? ","canada"},
		{"Which country is also called The Netherlands? ","holland"}
	};
	quizScore(conQuiz);
}
void gkQuiz(){
	map<string, string> knowledgeQuiz = {
		{"What is the most common surname in the United States? ","smith"},
		{"How many languages are written from right to left? ","12"},
		{"What is the most consumed manufactured drink in the world?","tea"},
		{"Which is the only edible food that never goes bad?","honey"},
		{"What is the all-time most-streamed song on Spotify to date?","shape of you"},
		{"Where was the first modern Olympic Games held?","1896"},
		{"What is the most uncommon blood type?","ab negative"},
		{"What was the very first message sent over the Internet?","lo"},
		{"What is the only even prime number? ","2"},
		{"Excluding religious books; What is the best-selling book of all time ?","don quixote"}
	};
	quizScore(knowledgeQuiz);
}
void scienceQuiz(){
	map<string, string> scQuiz = {
		{"How many elements are in the periodic table? ","118"},
		{"Which planet has the most moons? ","saturn"},
		{"How many bones do we have in an ear? ","3"},
		{"Which is the only body part that is fully grown from birth?","eyes"},
		{"Where is the strongest human muscle located?","jaw"},
		{"What is the name of the tallest grass on earth? ","bamboo"},
		{"Which freezes faster, hot water or cold water? ","hot water"},
		{"Which is the most abundant element in the universe?","hydrogen"},
		{"What is the heaviest organ in the human body? ","liver"},
		{"What was the first vaccine to be developed against a contagious disease? ","smallpox vaccine"}
	};
	quizScore(scQuiz);
}
void quizScore(map<string, string> quiz){
	int score = 0;
	for (auto i = quiz.begin(); i != quiz.end(); ++i){
		string answer;
		cout<<i->first;
		string correctAnswer = i->second;
		getline(cin, answer);
		if(answer == correctAnswer){
			cout<<"Correct! \n";
			score += 1;
		} else {
			cout<<"Wrong :( \n";
		}
	}
	cout<<"Your total score is "<<score<<"/10 \n";
}