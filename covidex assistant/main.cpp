#include<iostream>
#include<windows.h>
#include<mmsystem.h>
#include<stdio.h>
#include<conio.h>

using namespace std;
int main()
{


    PlaySound(TEXT("cou.wav"),NULL,SND_SYNC);

     cout<<"\t\t  ######    #######    #     #    ###    ######     #######    #     #  "<<endl;
     cout<<"\t\t #     #    #     #    #     #     #     #     #    #           #   #   "<<endl;
     cout<<"\t\t #          #     #    #     #     #     #     #    #            # #    "<<endl;
     cout<<"\t\t #          #     #    #     #     #     #     #    #####         #     "<<endl;
     cout<<"\t\t #          #     #     #   #      #     #     #    #            # #    "<<endl;
     cout<<"\t\t #     #    #     #      # #       #     #     #    #           #   #   "<<endl;
     cout<<"\t\t  #####     #######       #       ###    ######     #######    #     #  "<<endl;



 cout<<"\n\n\t\t |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n"<<endl;

    cout<<"\t\t\t\t\t\t####### WELCOME TO COVIDEX ########  "<<endl;
    PlaySound(TEXT("I1.wav"),NULL,SND_SYNC);

 cout<<"\n\n\t\t |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n"<<endl;

   while(1)
   {

    int c;
    cout<<"\n\n"<<endl;
    cout<<"\t\t1.ABOUT COVIDEX ASSISTANT"<<endl;
    cout<<"\t\t2.TAKE A QUICK SELF ACCESSMENT TEST"<<endl;
    cout<<"\t\t3.Q&A(know more bout covid-19)"<<endl;
    cout<<"\t\t4.DEVLOPED BY:-"<<endl;
    cout<<"\t\t5.EXIT."<<endl;
    cout<<"\t\tINPUT YOUR CHOICE(1-4)"<<endl;
    cin>>c;

switch(c)
{


case 1:
    {
      cout<<"\t\t\n ####FEATURES OF THE COVIDEX ASSISTANT####"<<endl;
      PlaySound(TEXT("I3.wav"),NULL,SND_SYNC);
      cout<<"\t\n 1.WHAT IS SELF ACCESSMENT TEST?"<<endl;
      cout<<"\t\n  ANS-THE SELF ACCESSMENT TEST BASICALLY PREDICTS YOUR EXPOSURE IN COVID-19"<<endl;
      cout<<"\t\n  IT WILL ASK SOME BASIC QUESTION BASED ON YOUR RESPONSE IT WILL PREDICT THINGS. "<<endl;
      cout<<"\t\n 2.WHAT IS Q&A?"<<endl;
      cout<<"\t\n   Q&A IS BASICALLY ONE OF THE IMPORTANT FEATURE OF THE COVIDEX VOICE ASSISTANT  "<<endl;
      cout<<"\t\n   Q&A FEATURE WILL TELL YOU THE  ANSWERS OF BASIC QUESTIOSN WHICH USUALLY ARISE   "<<endl;
      cout<<"\t\n   IN OUR CURIOUS MIND. "<<endl;
       break;
    }
case 2:
    {

       int num1;
	int s1, s2, s3;

	cout << "\n \t\t\t ******************************************************************\t\n" << endl;
	cout << "\n \t\t\t ******************************************************************\t\n" << endl;
	cout << "\n \t\t\t\t\tWELCOME TO COVID-19  QUICK SELF-ACCESSMENT TEST \t\n" << endl;
	cout << "\n \t\t\t ******************************************************************\t\n" << endl;
	cout << "\n \t\t\t ******************************************************************\t\n" << endl;


	cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
	cout << "\n \t\t\t\tHi Guys!I'm your health guide. I will ask you a few questions here \n \t\tplease answer them carefully and coorectly so that I can predict your expsore in Covid-19\t\n" << endl;
	cout << "\n\t(*****To continue with the programm please enter 1 and any other number to exit the programm.*****)\n" << endl;
	cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;


	cin >> num1;


	switch (num1)
	{
	case 1:
   {

		cout << "\n\n QUE 1.) Do you have any symptoms from the following list -\n" << endl;
		PlaySound(TEXT("I4.wav"),NULL,SND_SYNC);
		cout << "   \n 1.Cough and cold" << endl;
		cout << "   \n 2.Fever" << endl;
		cout << "   \n 3.Breathing problem " << endl;
		cout << "   \n 4.Loss of sense and taste" << endl;
		cout << "   \n (*****Press 1 for yes and 2 for no:*****\n" << endl;
		PlaySound(TEXT("I5.wav"),NULL,SND_SYNC);

		cin >> s1;

		cout << "\n\nQUE2.) Do you have any symptoms from the following list : -" << endl;
		PlaySound(TEXT("I4.wav"),NULL,SND_SYNC);
		cout << "   \n1.Diabities." << endl;
		cout << "	\n2.Hypertension" << endl;
		cout << "	\n3.Lung disease." << endl;
		cout << "	\n4.Heart Disease." << endl;
		cout << "	\n5.Kidney Disorder. " << endl;
		cout << "	\n (******Press 1 for yes and 2 for no:*****) " << endl;
		PlaySound(TEXT("I5.wav"),NULL,SND_SYNC);

		cin >> s2;

		cout << "\n\nQUE3.) Did you travel internationally in last :- " << endl;
		PlaySound(TEXT("I6.wav"),NULL,SND_SYNC);
		cout << "\n1.7 Days. " << endl;
		cout << "\n2.14 Days." << endl;
		cout << "\n3.28 days. " << endl;
		cout << "\n4.Didnt travel internationally from last months." << endl;
		cout << "\n( *****make your selection by entering the sequence number*****)\n" << endl;

		cin >> s3;

		if (s1 == 1 && s2 == 1 && s3 == 1)
		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "\n $$$$$You are under HIGH RISK$$$$$. Please isolate your self and have your covid-19 test from a hospital as soon as possible. \n" << endl;
			PlaySound(TEXT("I7.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}

		if (s1 == 1 && s2 == 1 && s3 == 2)
		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "$$$$$You are under HIGH RISK.$$$$$ \nPlease isolate your self and have your covid 19 test from a hospital as soon as possible. \n" << endl;
			PlaySound(TEXT("I7.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}

		if (s1 == 1 && s2 == 1 && s3 == 3)
		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "\n $$$$$You are under HIGH RISK.Please isolate your self and have your dovid - 19 test from a hospital as soon as possible.\n" << endl;
			PlaySound(TEXT("I7.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}

		if (s1 == 1 && s2 == 1 && s3 == 4)
		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "\n You are under MODERATE RISK.Please isolate your self so that we can prevent the spread of this virius.\n" << endl;
			PlaySound(TEXT("I8.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}
		if (s1 == 1 && s2 == 2 && s3 == 1)
		{
            cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "\n$$$$$You are under HIGH RISK$$$$$. Please isolate your self so that we can prevent the spread of this virius. \n" << endl;
			PlaySound(TEXT("I7.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;

		}
		if (s1 == 1 && s2 == 2 && s3 == 2)
		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "\nyou are under HIGH RISK. Please isolate your self so that we can prevent the spread of this virius. \n" << endl;
			PlaySound(TEXT("I7.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}
		if (s1 == 1 && s2 == 2 && s3 == 3)
		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << " You are under MODERATE RISK Please isolate your self so that we can prevent the spread of this virius.\n" << endl;
			PlaySound(TEXT("I8.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}
		if (s1 == 1 && s2 == 2 && s3 == 4)
		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "\n You are under LOW RISK.But still you should isolate yourself so that together we can prevent the spread of ths virius.\n " << endl;
			PlaySound(TEXT("I9.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}
		if (s1 == 2 && s2 == 1 && 53 == 1)
		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "\n$$$$$ You are under HIGH RISK $$$$$.Please isolate your self so that we can prevent the spread of this virius.\n " << endl;
			PlaySound(TEXT("I7.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}
		if (s1 == 2 && s2 == 1 && s3 == 2)
		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "\n You are under MODERATE RISK.Please isolate your self so that we can prevent the spread of this virius.\n" << endl;
			PlaySound(TEXT("I8.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}
		if (s1 == 2 && s2 == 1 && s3 == 3)
		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "\n You are under MODERATE RISK.Please isolate your self so that we can prevent the spread of this virius.\n " << endl;
			PlaySound(TEXT("I8.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}
		if (s1 == 2 && s2 == 1 && s3 == 4)
		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "\n You are under LOW RISK.But still you should isolate yourself so that together we can prevent the spread of ths virius.\n" << endl;
			PlaySound(TEXT("I9.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}
		if (s1 == 2 && s2 == 2 && s3 == 1)

		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "\n$$$$$ You are under HIGH RISK $$$$$. Please isolate your self so that we can prevent the spread of this virius \n" << endl;
			PlaySound(TEXT("I7.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}
		if (s1 == 2 && s2 == 2 && s3 == 2)
		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "\n you are under MODERATE RISK Please isolate your self so that we can prevent the spread of this virius \n" << endl;
		PlaySound(TEXT("I8.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}
		if (s1 == 2 && s2 == 2 && s3 == 3)
		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "\n You are under MODERATE RISK.Please isolate your self so that we can prevent the spread of this virius.\n" << endl;
			PlaySound(TEXT("I8.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}
		if (s1 == 2 && s2 == 2 && s3 == 4)

		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "\nYou are under LOW RISK.But still you should isolate yourself so that together we can prevent the spread of ths virius.\n " << endl;
			PlaySound(TEXT("I9.wav"),NULL,SND_SYNC);

			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}
		if (s1 > 2 || s2 > 2 || s3 > 4)

		{
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
			cout << "\n$$$$$$$$ ( INVALID INPUT!!!Please give a Valid Input ) $$$$$$$$\n" << endl;
			PlaySound(TEXT("I12.wav"),NULL,SND_SYNC);
			cout << "\n  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\t\n" << endl;
		}
}
		break;
   }

	default:
	    {

		cout << "\n  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\t\n" << endl;
		cout << " \t\t\tThanks for giving your time.Do visit us again!\n" << endl;
		PlaySound(TEXT("I10.wav"),NULL,SND_SYNC);
		cout << "\n  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\t\n" << endl;
		break;
	    }

	}


    case 3:
        {

        int n;
        PlaySound(TEXT("I11.wav"),NULL,SND_SYNC);
        cout<<"\n\tSELELCT THE QUESTIONS BY ENTERING THEIR RESPECTIVE ORDER(1-11)"<<endl;
        cout<<"\n\t  QUE 1. What happens to people who get covid 19 ?"<<endl;

        cout<<"\n\t  QUE 2.Who is most at risk of severe illness from COVID 19 ?"<<endl;

        cout<<"\n\t  QUE 3.Are there long term effects of covid 19 ?"<<endl;

        cout<<"\n\t  QUE 4. How can we protect others and ourselves if we don't know who is infected? "<<endl;

        cout<<"\n\t  QUE 5. When should i get a test for covid 19 ?"<<endl;

        cout<<"\n\t  QUE 6.What test should i get to see if i have covid 19 ?"<<endl;

        cout<<"\n\t  QUE 7.What should i do if i have been exposed to someone who has covid 19.?"<<endl;

        cout<<"\n\t  QUE 8.What is difference between isolation and quarantine ?"<<endl;

        cout<<"\n\t  QUE 9.  What about rapid tests?"<<endl;

        cout<<"\n\t  QUE 10.How long does it take to develop symptoms?"<<endl;

        cout<<"\n\t  QUE 11. Are antibotics effective in preventing or treating covid 19? "<<endl;

        cin>>n;
        switch(n)
        {
            case 1:
            {
                PlaySound(TEXT("Q1.wav"),NULL,SND_SYNC);
                cout<<" ANS : Among those who develop symptoms, most (about 80%) recover from the disease without needing hospital treatment."<<endl;

                cout<<" About 15% become seriously ill and require oxygen and 5% become critically ill and need intensive care."<<endl;

                cout<<"Complications leading to death may include respiratory failure, acute respiratory distress syndrome (ARDS), "<<endl;

                cout<<" sepsis and septic shock, thromboembolism, and/or multiorgan failure, including injury of the heart, liver or kidneys."<<endl;

                cout<<" In rare situations, children can develop a severe inflammatory syndrome a few weeks after infection."<<endl;

             PlaySound(TEXT("a1.wav"),NULL,SND_SYNC);
             break;
            }
            case 2:
            {
                 PlaySound(TEXT("Q2.wav"),NULL,SND_SYNC);
               cout<<" ANS : People aged 60 years and over, and those with underlying medical problems like high blood pressure,"<<endl;
               cout<<"  heart and lung problems, diabetes,obesity or cancer, are at higher risk of developing serious illness. "<<endl;
               cout<<"  However, anyone can get sick with COVID-19 and become seriously ill or die at any age."<<endl;

            PlaySound(TEXT("a2.wav"),NULL,SND_SYNC);
            break;
            }
            case 3:
            {
                PlaySound(TEXT("Q3.wav"),NULL,SND_SYNC);
                cout<<"ANS : Some people who have had COVID-19, whether they have needed hospitalization or not, continue to experience symptoms, "<<endl;
                cout<<" including fatigue, respiratory and neurological symptoms."<<endl;
                cout<<"WHO is working with our Global Technical Network for Clinical Management of COVID-19, researchers and patient groups around"<<endl;
                cout<<"the world to design and carry out studies of patients beyond the initial acute course of illness to understand the proportion of patients "<<endl;
                cout<<" who have long term effects, how long they persist, and why they occur. "<<endl;
                cout<<" These studies will be used to develop further guidance for patient care."<<endl;

            PlaySound(TEXT("a3.wav"),NULL,SND_SYNC);
            break;
            }
            case 4:
            {

             PlaySound(TEXT("Q4.wav"),NULL,SND_SYNC);
             cout<<"ANS : Stay safe by taking some simple precautions, such as physical distancing, wearing a mask, especially when distancing cannot be maintained, "<<endl;
             cout<<"keeping rooms well ventilated, avoiding crowds and close contact, regularly cleaning your hands, and coughing into a bent elbow or tissue. "<<endl;
             cout<<"Check local advice where you live and work. Do it all!"<<endl;

            PlaySound(TEXT("a4.wav"),NULL,SND_SYNC);
            break;
            }
            case 5:
            {
                PlaySound(TEXT("Q5.wav"),NULL,SND_SYNC);
                cout<<"ANS : Anyone with symptoms should be tested, wherever possible. People who do not have symptoms but have had close contact with someone who is,"<<endl;
                cout<<"or may be, infected may also consider testing – contact your local health guidelines and follow their guidance. "<<endl;
                cout<<"While a person is waiting for test results, they should remain isolated from others. Where testing capacity is limited,"<<endl;
                cout<<"tests should first be done for those at higher risk of infection, such as health workers, and those at higher risk of severe illness such as older people, "<<endl;
                cout<<"especially those living in seniors’ residences or long-term care facilities."<<endl;


                PlaySound(TEXT("a5.wav"),NULL,SND_SYNC);
                break;

            }
            case 6:
            {
                PlaySound(TEXT("Q6.wav"),NULL,SND_SYNC);
                cout<<"ANS : In most situations, a molecular test is used to detect SARS-CoV-2 and confirm infection. Polymerase chain reaction "<<endl;
                cout<<"(PCR) is the most commonly used molecular test. Samples are collected from the nose and/or throat with a swab. "<<endl;
                cout<<"Molecular tests detect virus in the sample by amplifying viral genetic material to detectable levels."<<endl;
                cout<<" For this reason, a molecular test is used to confirm an active infection, usually within a few days of exposure and around the time that symptoms may begin."<<endl;


            PlaySound(TEXT("a6.wav"),NULL,SND_SYNC);
            break;
            }
            case 7:
            {

            PlaySound(TEXT("Q7.wav"),NULL,SND_SYNC);
            cout<<" ANS : Rapid antigen tests (sometimes known as a rapid diagnostic test – RDT) detect viral proteins (known as antigens). "<<endl;
            cout<<"Samples are collected from the nose and/or throat with a swab. These tests are cheaper than PCR and will offer results more quickly, "<<endl;
            cout<<"although they are generally less accurate. These tests perform best when there is more virus circulating in the community and when sampled"<<endl;
            cout<<"from an individual during the time they are most infectious."<<endl;


            PlaySound(TEXT("a7.wav"),NULL,SND_SYNC);
            break;
            }
            case 8:
            {

             PlaySound(TEXT("Q8.wav"),NULL,SND_SYNC);
             cout<<"ANS : Both isolation and quarantine are methods of preventing the spread of COVID-19."<<endl;
             cout<<"Quarantine is used for anyone who is a contact of someone infected with the SARS-CoV-2 virus, which causes COVID-19, whether the infected person has symptoms or not."<<endl;
             cout<<" Quarantine means that you remain separated from others because you have been exposed to the virus and you may be infected and can take place in a designated facility or at home. "<<endl;
             cout<<" For COVID-19, this means staying in the facility or at home for 14 days."<<endl;

             cout<<"Isolation is used for people with COVID-19 symptoms or who have tested positive for the virus. "<<endl;
             cout<<"Being in isolation means being separated from other people, ideally in a medically facility where you can receive clinical care.  "<<endl;
             cout<<"If isolation in a medical facility is not possible and you are not in a high risk group of developing severe disease, isolation can take place at home."<<endl;
             cout<<"If you have symptoms, you should remain in isolation for at least 10 days plus an additional 3 days without symptoms. If you are infected and do not develop symptoms, "<<endl;
             cout<<"you should remain in isolation for 10 days from the time you test positive"<<endl;


            PlaySound(TEXT("a8.wav"),NULL,SND_SYNC);
            break;
            }
            case 9:
            {

            PlaySound(TEXT("Q9.wav"),NULL,SND_SYNC);
            cout<<"ANS : If you have been exposed to someone with COVID-19, you may become infected, even if you feel well."<<endl;

            cout<<"After exposure to someone who has COVID-19, do the following:"<<endl;

            cout<<"Call your health care provider or COVID-19 hotline to find out where and when to get a test."<<endl;
            cout<<"Cooperate with contact-tracing procedures to stop the spread of the virus."<<endl;
            cout<<"If testing is not available, stay home and away from others for 14 days."<<endl;
            cout<<"While you are in quarantine, do not go to work, to school or to public places. Ask someone to bring you supplies."<<endl;
            cout<<"Keep at least a 1-metre distance from others, even from your family members."<<endl;
            cout<<"Wear a medical mask to protect others, including if/when you need to seek medical care."<<endl;
            cout<<"Clean your hands frequently."<<endl;
            cout<<"Stay in a separate room from other family members, and if not possible, wear a medical mask."<<endl;
            cout<<"Keep the room well-ventilated."<<endl;
            cout<<"If you share a room, place beds at least 1 metre apart."<<endl;
            cout<<"Monitor yourself for any symptoms for 14 days. "<<endl;
            cout<<"Stay positive by keeping in touch with loved ones by phone or online, and by exercising at home."<<endl;


            PlaySound(TEXT("a9.wav"),NULL,SND_SYNC);
            break;
            }
            case 10:
            {

             PlaySound(TEXT("Q10.wav"),NULL,SND_SYNC);

            cout<<"ANS : The time from exposure to COVID-19 to the moment when symptoms begin is, on average, "<<endl;
            cout<<" 5-6 days and can range from 1-14 days. This is why people who have been exposed to the virus are advised to remain at home and stay away from others,"<<endl;
            cout<<"  for 14 days, in order to prevent the spread of the virus, especially where testing is not easily available."<<endl;

            PlaySound(TEXT("a10.wav"),NULL,SND_SYNC);
            break;
            }
            case 11:
            {


            PlaySound(TEXT("Q11.wav"),NULL,SND_SYNC);
            cout<<"ANS : Antibiotics do not work against viruses; they only work on bacterial infections. COVID-19 is caused by a virus, so antibiotics do not work. "<<endl;
            cout<<"Antibiotics should not be used as a means of prevention or treatment of COVID-19."<<endl;

            cout<<" In hospitals, physicians will sometimes use antibiotics to prevent or treat secondary bacterial infections which can be a complication of COVID-19 in severely ill patients."<<endl;
            cout<<" They should only be used as directed by a physician to treat a bacterial infection."<<endl;

            PlaySound(TEXT("a11.wav"),NULL,SND_SYNC);
            break;
            }

            default:
            {
        cout << "\n  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\t\n" << endl;
		cout << "\t\t\t\t\t\t WRONG INPUT" << endl;
		PlaySound(TEXT("I12.wav"),NULL,SND_SYNC);
		cout << "\n  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\t\n" << endl;
		break;
            }

        }

        }
        case 4:
            {
                PlaySound(TEXT("I13.wav"),NULL,SND_SYNC);
                cout<<"\n\t\t\t ##############   DEVELOPERS:-  ##############  "<<endl;

                cout<<"\n\t 1.AYUSH KUMAR.  "<<endl;

                cout<<"\n\t 2.ADITYA SINGH.  "<<endl;

                cout<<"\n\t 3.PRANSHU TIWARI.  "<<endl;

                cout<<"\n\t 4.RAHUL MODI. "<<endl;
                break;


            }
        case 5:
            {
        cout<<"\n\t\t |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n"<<endl;
        cout<<"\n\t\t |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n"<<endl;

		cout << " \t\t\tThanks for giving your time.Do visit us again!" << endl;
		PlaySound(TEXT("I10.wav"),NULL,SND_SYNC);

		cout<<"\n\t\t |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n"<<endl;
		cout<<"\n\t\t |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n"<<endl;

            }


                 exit(5);
            }
	}

return 0;
    }








