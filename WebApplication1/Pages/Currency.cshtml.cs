using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Authentication;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;
using Microsoft.Extensions.Primitives;

namespace WebApplication1.Pages
{
    public class Currency : PageModel
    {
        public StringValues inputValue;
        public  double result;
        
        public void OnGet()
        {
            
        }
        
        public void OnPost()
        {
            this.inputValue = Request.Form["inputValue"];

            double inputInDouble = Convert.ToDouble(this.inputValue);

            this.result= inputInDouble * 1.50;

        }
    }
}