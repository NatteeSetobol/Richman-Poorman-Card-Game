#import "Texture2D.h"

/*
 This class extends Texture2D to provide additional functionality.
 See blog posts at:
 
    http://mpatric.com/2011-10-21-extending-texture2d-part-1-rotation
    http://mpatric.com/2011-10-31-extending-texture2d-part-2-sprite-sheets
    http://mpatric.com/2011-11-22-extending-texture2d-part-3-texture-atlas

 Michael Patricios, 2011
*/

@interface MyTexture2D : Texture2D {
@private
	
   NSMutableDictionary* _textureAtlas;
	NSString* atlasfileused;
	
	
	
	@public
	CGSize _imageSize;
	int animestate;
	float delay;
	float delaycount;
	 
}

@property (readonly, nonatomic) CGSize imageSize;
@property (retain, nonatomic) NSString* atlasfileused;

- (id) initWithImage:(UIImage*)uiImage;
- (id) initWithImage:(UIImage*)uiImage atlasFilename:(NSString*)atlasFilename;

- (void) drawInRect:(CGRect)rect rotatedBy:(float)rotationAngle;
- (void) drawAtPoint:(CGPoint)point rotatedBy:(float)rotationAngle;
- (void) drawAtPointFlip:(CGPoint)point;

- (void) drawAsSpriteSheetInRect:(CGRect)rect sheetDimensions:(CGSize)dimensions index:(int)index;
- (void) drawAsSpriteSheetAtPoint:(CGPoint)point sheetDimensions:(CGSize)dimensions index:(int)index;

- (void) drawFromAtlasInRect:(CGRect)rect key:(NSString*)key;
- (void) drawFromAtlasAtPoint:(CGPoint)point key:(NSString*)key;
- (void) drawFromAtlasAtPointv2:(CGPoint)point key:(NSString*)key;

- (int) count;
-(void) showframebykey: (NSString*) key: (int) x: (int) y;
- (void) drawInRectFlip:(CGRect)rect textureRect:(CGRect)textureRect;
- (void) animateflip:(int) x: (int) y;

- (void) animate:(int) y: (int) x;
- (bool) animateonce:(int) x: (int) y;
-(bool) animateonceflip:(int) x: (int) y;
-(NSString*) GetType:(NSString*) key;  
-(void) pauseCurrentFrame:(int) x:(int) y;
-(void) showframebykey: (NSString*) key: (int) x: (int) y:rotateBy: (int) degrees;



@end
