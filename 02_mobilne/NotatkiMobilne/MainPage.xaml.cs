using System.Collections.ObjectModel;

namespace NotatkiMobilne;

public partial class MainPage : ContentPage
{
    public ObservableCollection<string> Notatki { get; set; }

    public MainPage()
    {
        InitializeComponent();

        Notatki = new ObservableCollection<string>
        {
            "Notatka pierwsza",
            "Notatka 2",
            "Trzecia notatka"
        };

        BindingContext = this;
    }

    private void DodajNotatke_Clicked(object sender, EventArgs e)
    {
        string tekst = NotatkaEntry.Text?.Trim();

        if (!string.IsNullOrWhiteSpace(tekst))
        {
            Notatki.Add(tekst);
            NotatkaEntry.Text = string.Empty;
        }
    }
}