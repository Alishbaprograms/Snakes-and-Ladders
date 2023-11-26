int main()
{
    LPCTSTR SongFile="test.wav";
    PlaySound(SongFile,NULL,SND_NODEFAULT);
    return 0;
}
