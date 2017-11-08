//
//  SynopsisVideoFrameMPImage.m
//  Synopsis-Framework
//
//  Created by vade on 10/24/17.
//  Copyright © 2017 v002. All rights reserved.
//

#import "SynopsisVideoFrameMPImage.h"
@interface SynopsisVideoFrameMPImage ()
@property (readwrite, strong) SynopsisVideoFormatSpecifier* videoFormatSpecifier;
@property (readwrite, strong) MPSImage* image;
@end

@implementation SynopsisVideoFrameMPImage
- (instancetype) initWithMPSImage:(MPSImage*)image formatSpecifier:(SynopsisVideoFormatSpecifier*)formatSpecifier
{
    self = [super init];
    if(self)
    {
        self.image = image;
        self.videoFormatSpecifier = formatSpecifier;        
    }
    return self;
    
}
- (MPSImage*) mpsImage
{
    return self.image;
}

- (NSString*) label
{
    return self.image.label;
}

@end
