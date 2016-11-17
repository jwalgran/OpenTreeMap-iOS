// This file is part of the OpenTreeMap code.
//
// OpenTreeMap is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// OpenTreeMap is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with OpenTreeMap.  If not, see <http://www.gnu.org/licenses/>.

#import <UIKit/UIKit.h>
#import "OTMRegistrationViewController.h"
#import "OTMUIViewController.h"

@interface OTMEULAViewController : OTMUIViewController

@property (nonatomic) BOOL loaded;
@property (nonatomic, strong) OTMRegistrationViewController *regController;
@property (nonatomic, strong) IBOutlet UIWebView *webview;

-(IBAction)acceptEULA:(id)sender;
-(IBAction)rejectEULA:(id)sender;

@end
