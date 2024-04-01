namespace f1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void listfile_SelectedIndexChanged(object sender, EventArgs e)
        {
            mediafile file = listfile.SelectedItem as mediafile;    
            if (file != null)
            {
                axWindowsMediaPlayer1.URL = file.Path;
                axWindowsMediaPlayer1.Ctlcontrols.play();
            }
        }

        private void openbtn_Click(object sender, EventArgs e)
        {
            using (OpenFileDialog oft = new OpenFileDialog() { Multiselect = true, ValidateNames = true, Filter = "WMV|*.mwv|MP3|*.mp3" })
            {
                if (oft.ShowDialog() == DialogResult.OK)
                {
                    List<mediafile> files = new List<mediafile>();
                    foreach (string fileName in oft.FileNames)
                    {
                        FileInfo fi = new FileInfo(fileName);
                        files.Add(new mediafile() { Filename = Path.GetFileNameWithoutExtension(fi.FullName), Path = fi.FullName });

                    }
                    listfile.DataSource = files;
                   
                }

            }

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            listfile.ValueMember = "Path";
            listfile.DisplayMember = "FileName";
        }
    }
}
