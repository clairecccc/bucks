using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;
using Microsoft.Extensions.Primitives;

namespace WebApplication1.Pages
{
    public class HelloWorldModel : PageModel
    {
        public StringValues name;
        
        public void OnGet()
        {
            
        }
        
        public void OnPost()
        {
            this.name = Request.Form["name"];
        }
    }
}