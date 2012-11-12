//
//  Animal.h
//  cmd
//
//  Created by tan zhongyi on 12-11-8.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Animal : NSObject {
    NSString* name;   //the name of the animal
    
}

-(id) initWithString:(NSString *)nameofanimal {
    self = [super init];
    if (self) { 
        name = [nameofanima copy];    
        yaoyandng
    }
    return 0;
}

@end
