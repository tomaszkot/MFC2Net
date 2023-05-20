using System.Windows.Forms;


namespace ManagedLibrary47
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

        }

        public void SetMessageText(string message)
        {
            txtMessage.Text = message + " windowsXamlHost!";

        }



        private void Form1_Load(object sender, System.EventArgs e)
        {
            
        }
    }
}
