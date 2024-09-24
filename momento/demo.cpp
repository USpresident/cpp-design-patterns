
#if 0

int main()
{
    OriginalWord *fstMsg = new OriginalWord("Hello ffff..");
    std::cout << "fstMes....." << std::endl;
    fstMsg->showWords();
    CareTaker *careTaker = new CareTaker();
    careTaker->SetMomento(fstMsg->SaveWords());
    std::cout << "has saved fstMsg....." << std::endl;

    OriginalWord *sndMsg = new OriginalWord("Hello hhhhh..");
    std::cout << "sndMes....." << std::endl;
    sndMsg->showWords();

    OriginalWord *thdMsg = new OriginalWord("Hello ggggg..");
    std::cout << "thdMsg....." << std::endl;
    thdMsg->showWords();

    std::cout << "....................." << std::endl;
    fstMsg->recycleWords(careTaker->GetMomento());
    fstMsg->showWords();

    delete fstMsg;
    delete sndMsg;
    delete thdMsg;
    delete careTaker;

    return 0;
}

#endif