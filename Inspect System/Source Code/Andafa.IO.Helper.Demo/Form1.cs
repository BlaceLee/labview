using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace Andafa.IO.Helper.Demo
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            cbType.SelectedIndex = 0;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            InnerPack innerPack = new InnerPack();
            innerPack.Url = tbUrl.Text;
             
            tbResult.Text = innerPack.ValidateBarcode(tbBarcode.Text, (InnerPackServer.PrintType)Enum.Parse(typeof(InnerPackServer.PrintType), cbType.Text), tbKey.Text);

        }
    }
}
