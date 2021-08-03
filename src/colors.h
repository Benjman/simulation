#ifndef SIMULATION_COLORS_H
#define SIMULATION_COLORS_H

#include <glm/vec3.hpp>

using Color = glm::vec3;

struct Colors {

	static constexpr Color Amber50 = Color(1.0f, 0.972549f, 0.882353f);
	static constexpr Color Amber100 = Color(1.0f, 0.92549f, 0.701961f);
	static constexpr Color Amber200 = Color(1.0f, 0.878431f, 0.509804f);
	static constexpr Color Amber300 = Color(1.0f, 0.835294f, 0.309804f);
	static constexpr Color Amber400 = Color(1.0f, 0.792157f, 0.156863f);
	static constexpr Color Amber500 = Color(1.0f, 0.756863f, 0.027451f);
	static constexpr Color Amber600 = Color(1.0f, 0.701961f, 0.0f);
	static constexpr Color Amber700 = Color(1.0f, 0.627451f, 0.0f);
	static constexpr Color Amber800 = Color(1.0f, 0.560784f, 0.0f);
	static constexpr Color Amber900 = Color(1.0f, 0.435294f, 0.0f);
	static constexpr Color AmberA100 = Color(1.0f, 0.898039f, 0.498039f);
	static constexpr Color AmberA200 = Color(1.0f, 0.843137f, 0.25098f);
	static constexpr Color AmberA400 = Color(1.0f, 0.768627f, 0.0f);
	static constexpr Color AmberA700 = Color(1.0f, 0.670588f, 0.0f);


	static constexpr Color Blue50 = Color(0.890196f, 0.94902f, 0.992157f);
	static constexpr Color Blue100 = Color(0.733333f, 0.870588f, 0.984314f);
	static constexpr Color Blue200 = Color(0.564706f, 0.792157f, 0.976471f);
	static constexpr Color Blue300 = Color(0.392157f, 0.709804f, 0.964706f);
	static constexpr Color Blue400 = Color(0.258824f, 0.647059f, 0.960784f);
	static constexpr Color Blue500 = Color(0.129412f, 0.588235f, 0.952941f);
	static constexpr Color Blue600 = Color(0.117647f, 0.533333f, 0.898039f);
	static constexpr Color Blue700 = Color(0.098039f, 0.462745f, 0.823529f);
	static constexpr Color Blue800 = Color(0.082353f, 0.396078f, 0.752941f);
	static constexpr Color Blue900 = Color(0.05098f, 0.278431f, 0.631373f);
	static constexpr Color BlueA100 = Color(0.509804f, 0.694118f, 1.0f);
	static constexpr Color BlueA200 = Color(0.266667f, 0.541176f, 1.0f);
	static constexpr Color BlueA400 = Color(0.160784f, 0.47451f, 1.0f);
	static constexpr Color BlueA700 = Color(0.160784f, 0.384314f, 1.0f);


	static constexpr Color BlueGrey50 = Color(0.92549f, 0.937255f, 0.945098f);
	static constexpr Color BlueGrey100 = Color(0.811765f, 0.847059f, 0.862745f);
	static constexpr Color BlueGrey200 = Color(0.690196f, 0.745098f, 0.772549f);
	static constexpr Color BlueGrey300 = Color(0.564706f, 0.643137f, 0.682353f);
	static constexpr Color BlueGrey400 = Color(0.470588f, 0.564706f, 0.611765f);
	static constexpr Color BlueGrey500 = Color(0.376471f, 0.490196f, 0.545098f);
	static constexpr Color BlueGrey600 = Color(0.329412f, 0.431373f, 0.478431f);
	static constexpr Color BlueGrey700 = Color(0.270588f, 0.352941f, 0.392157f);
	static constexpr Color BlueGrey800 = Color(0.215686f, 0.278431f, 0.309804f);
	static constexpr Color BlueGrey900 = Color(0.14902f, 0.196078f, 0.219608f);


	static constexpr Color Brown50 = Color(0.937255f, 0.921569f, 0.913725f);
	static constexpr Color Brown100 = Color(0.843137f, 0.8f, 0.784314f);
	static constexpr Color Brown200 = Color(0.737255f, 0.666667f, 0.643137f);
	static constexpr Color Brown300 = Color(0.631373f, 0.533333f, 0.498039f);
	static constexpr Color Brown400 = Color(0.552941f, 0.431373f, 0.388235f);
	static constexpr Color Brown500 = Color(0.47451f, 0.333333f, 0.282353f);
	static constexpr Color Brown600 = Color(0.427451f, 0.298039f, 0.254902f);
	static constexpr Color Brown700 = Color(0.364706f, 0.25098f, 0.215686f);
	static constexpr Color Brown800 = Color(0.305882f, 0.203922f, 0.180392f);
	static constexpr Color Brown900 = Color(0.243137f, 0.152941f, 0.137255f);


	static constexpr Color Cyan50 = Color(0.878431f, 0.968627f, 0.980392f);
	static constexpr Color Cyan100 = Color(0.698039f, 0.921569f, 0.94902f);
	static constexpr Color Cyan200 = Color(0.501961f, 0.870588f, 0.917647f);
	static constexpr Color Cyan300 = Color(0.301961f, 0.815686f, 0.882353f);
	static constexpr Color Cyan400 = Color(0.14902f, 0.776471f, 0.854902f);
	static constexpr Color Cyan500 = Color(0.0f, 0.737255f, 0.831373f);
	static constexpr Color Cyan600 = Color(0.0f, 0.67451f, 0.756863f);
	static constexpr Color Cyan700 = Color(0.0f, 0.592157f, 0.654902f);
	static constexpr Color Cyan800 = Color(0.0f, 0.513725f, 0.560784f);
	static constexpr Color Cyan900 = Color(0.0f, 0.376471f, 0.392157f);
	static constexpr Color CyanA100 = Color(0.517647f, 1.0f, 1.0f);
	static constexpr Color CyanA200 = Color(0.094118f, 1.0f, 1.0f);
	static constexpr Color CyanA400 = Color(0.0f, 0.898039f, 1.0f);
	static constexpr Color CyanA700 = Color(0.0f, 0.721569f, 0.831373f);


	static constexpr Color DeepOrange50 = Color(0.984314f, 0.913725f, 0.905882f);
	static constexpr Color DeepOrange100 = Color(1.0f, 0.8f, 0.737255f);
	static constexpr Color DeepOrange200 = Color(1.0f, 0.670588f, 0.568627f);
	static constexpr Color DeepOrange300 = Color(1.0f, 0.541176f, 0.396078f);
	static constexpr Color DeepOrange400 = Color(1.0f, 0.439216f, 0.262745f);
	static constexpr Color DeepOrange500 = Color(1.0f, 0.341176f, 0.133333f);
	static constexpr Color DeepOrange600 = Color(0.956863f, 0.317647f, 0.117647f);
	static constexpr Color DeepOrange700 = Color(0.901961f, 0.290196f, 0.098039f);
	static constexpr Color DeepOrange800 = Color(0.847059f, 0.262745f, 0.082353f);
	static constexpr Color DeepOrange900 = Color(0.74902f, 0.211765f, 0.047059f);
	static constexpr Color DeepOrangeA100 = Color(1.0f, 0.619608f, 0.501961f);
	static constexpr Color DeepOrangeA200 = Color(1.0f, 0.431373f, 0.25098f);
	static constexpr Color DeepOrangeA400 = Color(1.0f, 0.239216f, 0.0f);
	static constexpr Color DeepOrangeA700 = Color(0.866667f, 0.172549f, 0.0f);


	static constexpr Color DeepPurple50 = Color(0.929412f, 0.905882f, 0.964706f);
	static constexpr Color Red50 = Color(1.0f, 0.921569f, 0.933333f);
	static constexpr Color Red100 = Color(1.0f, 0.803922f, 0.823529f);
	static constexpr Color Red200 = Color(0.937255f, 0.603922f, 0.603922f);
	static constexpr Color Red300 = Color(0.898039f, 0.45098f, 0.45098f);
	static constexpr Color Red400 = Color(0.937255f, 0.32549f, 0.313725f);
	static constexpr Color Red500 = Color(0.956863f, 0.262745f, 0.211765f);
	static constexpr Color Red600 = Color(0.898039f, 0.223529f, 0.207843f);
	static constexpr Color Red700 = Color(0.827451f, 0.184314f, 0.184314f);
	static constexpr Color Red800 = Color(0.776471f, 0.156863f, 0.156863f);
	static constexpr Color Red900 = Color(0.717647f, 0.109804f, 0.109804f);
	static constexpr Color RedA100 = Color(1.0f, 0.541176f, 0.501961f);
	static constexpr Color RedA200 = Color(1.0f, 0.321569f, 0.321569f);
	static constexpr Color RedA400 = Color(1.0f, 0.090196f, 0.266667f);
	static constexpr Color RedA700 = Color(0.835294f, 0.0f, 0.0f);

	static constexpr Color Yellow50 = Color(1.0f, 0.992157f, 0.905882f);
	static constexpr Color Green50 = Color(0.909804f, 0.960784f, 0.913725f);
	static constexpr Color Green100 = Color(0.784314f, 0.901961f, 0.788235f);
	static constexpr Color Green200 = Color(0.647059f, 0.839216f, 0.654902f);
	static constexpr Color Green300 = Color(0.505882f, 0.780392f, 0.517647f);
	static constexpr Color Green400 = Color(0.4f, 0.733333f, 0.415686f);
	static constexpr Color Green500 = Color(0.298039f, 0.686275f, 0.313725f);
	static constexpr Color Green600 = Color(0.262745f, 0.627451f, 0.278431f);
	static constexpr Color Green700 = Color(0.219608f, 0.556863f, 0.235294f);
	static constexpr Color Green800 = Color(0.180392f, 0.490196f, 0.196078f);
	static constexpr Color Green900 = Color(0.105882f, 0.368627f, 0.12549f);
	static constexpr Color GreenA100 = Color(0.72549f, 0.964706f, 0.792157f);
	static constexpr Color GreenA200 = Color(0.411765f, 0.941176f, 0.682353f);
	static constexpr Color GreenA400 = Color(0.0f, 0.901961f, 0.462745f);
	static constexpr Color GreenA700 = Color(0.0f, 0.784314f, 0.32549f);


	static constexpr Color Grey50 = Color(0.980392f, 0.980392f, 0.980392f);
	static constexpr Color Grey100 = Color(0.960784f, 0.960784f, 0.960784f);
	static constexpr Color Grey200 = Color(0.933333f, 0.933333f, 0.933333f);
	static constexpr Color Grey300 = Color(0.878431f, 0.878431f, 0.878431f);
	static constexpr Color Grey400 = Color(0.741176f, 0.741176f, 0.741176f);
	static constexpr Color Grey500 = Color(0.619608f, 0.619608f, 0.619608f);
	static constexpr Color Grey600 = Color(0.458824f, 0.458824f, 0.458824f);
	static constexpr Color Grey700 = Color(0.380392f, 0.380392f, 0.380392f);
	static constexpr Color Grey800 = Color(0.258824f, 0.258824f, 0.258824f);
	static constexpr Color Grey900 = Color(0.129412f, 0.129412f, 0.129412f);


	static constexpr Color Indigo50 = Color(0.909804f, 0.917647f, 0.964706f);
	static constexpr Color Indigo100 = Color(0.772549f, 0.792157f, 0.913725f);
	static constexpr Color Indigo200 = Color(0.623529f, 0.658824f, 0.854902f);
	static constexpr Color Indigo300 = Color(0.47451f, 0.52549f, 0.796078f);
	static constexpr Color Indigo400 = Color(0.360784f, 0.419608f, 0.752941f);
	static constexpr Color Indigo500 = Color(0.247059f, 0.317647f, 0.709804f);
	static constexpr Color Indigo600 = Color(0.223529f, 0.286275f, 0.670588f);
	static constexpr Color Indigo700 = Color(0.188235f, 0.247059f, 0.623529f);
	static constexpr Color Indigo800 = Color(0.156863f, 0.207843f, 0.576471f);
	static constexpr Color Indigo900 = Color(0.101961f, 0.137255f, 0.494118f);
	static constexpr Color IndigoA100 = Color(0.54902f, 0.619608f, 1.0f);
	static constexpr Color IndigoA200 = Color(0.32549f, 0.427451f, 0.996078f);
	static constexpr Color IndigoA400 = Color(0.239216f, 0.352941f, 0.996078f);
	static constexpr Color IndigoA700 = Color(0.188235f, 0.309804f, 0.996078f);


	static constexpr Color LightBlue50 = Color(0.882353f, 0.960784f, 0.996078f);
	static constexpr Color LightBlue100 = Color(0.701961f, 0.898039f, 0.988235f);
	static constexpr Color LightBlue200 = Color(0.505882f, 0.831373f, 0.980392f);
	static constexpr Color LightBlue300 = Color(0.309804f, 0.764706f, 0.968627f);
	static constexpr Color LightBlue400 = Color(0.160784f, 0.713725f, 0.964706f);
	static constexpr Color LightBlue500 = Color(0.011765f, 0.662745f, 0.956863f);
	static constexpr Color LightBlue600 = Color(0.011765f, 0.607843f, 0.898039f);
	static constexpr Color LightBlue700 = Color(0.007843f, 0.533333f, 0.819608f);
	static constexpr Color LightBlue800 = Color(0.007843f, 0.466667f, 0.741176f);
	static constexpr Color LightBlue900 = Color(0.003922f, 0.341176f, 0.607843f);
	static constexpr Color LightBlueA100 = Color(0.501961f, 0.847059f, 1.0f);
	static constexpr Color LightBlueA200 = Color(0.25098f, 0.768627f, 1.0f);
	static constexpr Color LightBlueA400 = Color(0.0f, 0.690196f, 1.0f);
	static constexpr Color LightBlueA700 = Color(0.0f, 0.568627f, 0.917647f);


	static constexpr Color LightGreen50 = Color(0.945098f, 0.972549f, 0.913725f);
	static constexpr Color LightGreen100 = Color(0.862745f, 0.929412f, 0.784314f);
	static constexpr Color LightGreen200 = Color(0.772549f, 0.882353f, 0.647059f);
	static constexpr Color LightGreen300 = Color(0.682353f, 0.835294f, 0.505882f);
	static constexpr Color LightGreen400 = Color(0.611765f, 0.8f, 0.396078f);
	static constexpr Color LightGreen500 = Color(0.545098f, 0.764706f, 0.290196f);
	static constexpr Color LightGreen600 = Color(0.486275f, 0.701961f, 0.258824f);
	static constexpr Color LightGreen700 = Color(0.407843f, 0.623529f, 0.219608f);
	static constexpr Color LightGreen800 = Color(0.333333f, 0.545098f, 0.184314f);
	static constexpr Color LightGreen900 = Color(0.2f, 0.411765f, 0.117647f);
	static constexpr Color LightGreenA100 = Color(0.8f, 1.0f, 0.564706f);
	static constexpr Color LightGreenA200 = Color(0.698039f, 1.0f, 0.34902f);
	static constexpr Color LightGreenA400 = Color(0.462745f, 1.0f, 0.011765f);
	static constexpr Color LightGreenA700 = Color(0.392157f, 0.866667f, 0.090196f);


	static constexpr Color Lime50 = Color(0.976471f, 0.984314f, 0.905882f);
	static constexpr Color Lime100 = Color(0.941176f, 0.956863f, 0.764706f);
	static constexpr Color Lime200 = Color(0.901961f, 0.933333f, 0.611765f);
	static constexpr Color Lime300 = Color(0.862745f, 0.905882f, 0.458824f);
	static constexpr Color Lime400 = Color(0.831373f, 0.882353f, 0.341176f);
	static constexpr Color Lime500 = Color(0.803922f, 0.862745f, 0.223529f);
	static constexpr Color Lime600 = Color(0.752941f, 0.792157f, 0.2f);
	static constexpr Color Lime700 = Color(0.686275f, 0.705882f, 0.168627f);
	static constexpr Color Lime800 = Color(0.619608f, 0.615686f, 0.141176f);
	static constexpr Color Lime900 = Color(0.509804f, 0.466667f, 0.090196f);
	static constexpr Color LimeA100 = Color(0.956863f, 1.0f, 0.505882f);
	static constexpr Color LimeA200 = Color(0.933333f, 1.0f, 0.254902f);
	static constexpr Color LimeA400 = Color(0.776471f, 1.0f, 0.0f);
	static constexpr Color LimeA700 = Color(0.682353f, 0.917647f, 0.0f);


	static constexpr Color Orange50 = Color(1.0f, 0.952941f, 0.878431f);
	static constexpr Color Orange100 = Color(1.0f, 0.878431f, 0.698039f);
	static constexpr Color Orange200 = Color(1.0f, 0.8f, 0.501961f);
	static constexpr Color Orange300 = Color(1.0f, 0.717647f, 0.301961f);
	static constexpr Color Orange400 = Color(1.0f, 0.654902f, 0.14902f);
	static constexpr Color Orange500 = Color(1.0f, 0.596078f, 0.0f);
	static constexpr Color Orange600 = Color(0.984314f, 0.54902f, 0.0f);
	static constexpr Color Orange700 = Color(0.960784f, 0.486275f, 0.0f);
	static constexpr Color Orange800 = Color(0.937255f, 0.423529f, 0.0f);
	static constexpr Color Orange900 = Color(0.901961f, 0.317647f, 0.0f);
	static constexpr Color OrangeA100 = Color(1.0f, 0.819608f, 0.501961f);
	static constexpr Color OrangeA200 = Color(1.0f, 0.670588f, 0.25098f);
	static constexpr Color OrangeA400 = Color(1.0f, 0.568627f, 0.0f);
	static constexpr Color OrangeA700 = Color(1.0f, 0.427451f, 0.0f);


	static constexpr Color Pink50 = Color(0.988235f, 0.894118f, 0.92549f);
	static constexpr Color Teal50 = Color(0.878431f, 0.94902f, 0.945098f);
	static constexpr Color Teal100 = Color(0.698039f, 0.87451f, 0.858824f);
	static constexpr Color Teal200 = Color(0.501961f, 0.796078f, 0.768627f);
	static constexpr Color Teal300 = Color(0.301961f, 0.713725f, 0.67451f);
	static constexpr Color Teal400 = Color(0.14902f, 0.65098f, 0.603922f);
	static constexpr Color Teal500 = Color(0.0f, 0.588235f, 0.533333f);
	static constexpr Color Teal600 = Color(0.0f, 0.537255f, 0.482353f);
	static constexpr Color Teal700 = Color(0.0f, 0.47451f, 0.419608f);
	static constexpr Color Teal800 = Color(0.0f, 0.411765f, 0.360784f);
	static constexpr Color Teal900 = Color(0.0f, 0.301961f, 0.25098f);
	static constexpr Color TealA100 = Color(0.654902f, 1.0f, 0.921569f);
	static constexpr Color TealA200 = Color(0.392157f, 1.0f, 0.854902f);
	static constexpr Color TealA400 = Color(0.113725f, 0.913725f, 0.713725f);
	static constexpr Color TealA700 = Color(0.0f, 0.74902f, 0.647059f);


	static constexpr Color Purple50 = Color(0.952941f, 0.898039f, 0.960784f);
	static constexpr Color Purple100 = Color(0.882353f, 0.745098f, 0.905882f);
	static constexpr Color Purple200 = Color(0.807843f, 0.576471f, 0.847059f);
	static constexpr Color Purple300 = Color(0.729412f, 0.407843f, 0.784314f);
	static constexpr Color Purple400 = Color(0.670588f, 0.278431f, 0.737255f);
	static constexpr Color Purple500 = Color(0.611765f, 0.152941f, 0.690196f);
	static constexpr Color Purple600 = Color(0.556863f, 0.141176f, 0.666667f);
	static constexpr Color Purple700 = Color(0.482353f, 0.121569f, 0.635294f);
	static constexpr Color Purple800 = Color(0.415686f, 0.105882f, 0.603922f);
	static constexpr Color Purple900 = Color(0.290196f, 0.078431f, 0.54902f);
	static constexpr Color PurpleA100 = Color(0.917647f, 0.501961f, 0.988235f);
	static constexpr Color PurpleA200 = Color(0.878431f, 0.25098f, 0.984314f);
	static constexpr Color PurpleA400 = Color(0.835294f, 0.0f, 0.976471f);
	static constexpr Color PurpleA700 = Color(0.666667f, 0.0f, 1.0f);

	static constexpr Color Yellow100 = Color(1.0f, 0.976471f, 0.768627f);
	static constexpr Color Yellow200 = Color(1.0f, 0.960784f, 0.615686f);
	static constexpr Color Yellow300 = Color(1.0f, 0.945098f, 0.462745f);
	static constexpr Color Yellow400 = Color(1.0f, 0.933333f, 0.345098f);
	static constexpr Color Yellow500 = Color(1.0f, 0.921569f, 0.231373f);
	static constexpr Color Yellow600 = Color(0.992157f, 0.847059f, 0.207843f);
	static constexpr Color Yellow700 = Color(0.984314f, 0.752941f, 0.176471f);
	static constexpr Color Yellow800 = Color(0.976471f, 0.658824f, 0.145098f);
	static constexpr Color Yellow900 = Color(0.960784f, 0.498039f, 0.090196f);
	static constexpr Color YellowA100 = Color(1.0f, 1.0f, 0.552941f);
	static constexpr Color YellowA200 = Color(1.0f, 1.0f, 0.0f);
	static constexpr Color YellowA400 = Color(1.0f, 0.917647f, 0.0f);
	static constexpr Color YellowA700 = Color(1.0f, 0.839216f, 0.0f);


	static constexpr Color Pink100 = Color(0.972549f, 0.733333f, 0.815686f);
	static constexpr Color Pink200 = Color(0.956863f, 0.560784f, 0.694118f);
	static constexpr Color Pink300 = Color(0.941176f, 0.384314f, 0.572549f);
	static constexpr Color Pink400 = Color(0.92549f, 0.25098f, 0.478431f);
	static constexpr Color Pink500 = Color(0.913725f, 0.117647f, 0.388235f);
	static constexpr Color Pink600 = Color(0.847059f, 0.105882f, 0.376471f);
	static constexpr Color Pink700 = Color(0.760784f, 0.094118f, 0.356863f);
	static constexpr Color Pink800 = Color(0.678431f, 0.078431f, 0.341176f);
	static constexpr Color Pink900 = Color(0.533333f, 0.054902f, 0.309804f);
	static constexpr Color PinkA100 = Color(1.0f, 0.501961f, 0.670588f);
	static constexpr Color PinkA200 = Color(1.0f, 0.25098f, 0.505882f);
	static constexpr Color PinkA400 = Color(0.960784f, 0.0f, 0.341176f);
	static constexpr Color PinkA700 = Color(0.772549f, 0.066667f, 0.384314f);

	static constexpr Color DeepPurple100 = Color(0.819608f, 0.768627f, 0.913725f);
	static constexpr Color DeepPurple200 = Color(0.701961f, 0.615686f, 0.858824f);
	static constexpr Color DeepPurple300 = Color(0.584314f, 0.458824f, 0.803922f);
	static constexpr Color DeepPurple400 = Color(0.494118f, 0.341176f, 0.760784f);
	static constexpr Color DeepPurple500 = Color(0.403922f, 0.227451f, 0.717647f);
	static constexpr Color DeepPurple600 = Color(0.368627f, 0.207843f, 0.694118f);
	static constexpr Color DeepPurple700 = Color(0.317647f, 0.176471f, 0.658824f);
	static constexpr Color DeepPurple800 = Color(0.270588f, 0.152941f, 0.627451f);
	static constexpr Color DeepPurple900 = Color(0.192157f, 0.105882f, 0.572549f);
	static constexpr Color DeepPurpleA100 = Color(0.701961f, 0.533333f, 1.0f);
	static constexpr Color DeepPurpleA200 = Color(0.486275f, 0.301961f, 1.0f);
	static constexpr Color DeepPurpleA400 = Color(0.396078f, 0.121569f, 1.0f);
	static constexpr Color DeepPurpleA700 = Color(0.384314f, 0.0f, 0.917647f);


	static constexpr Color Black = Color(0);
	static constexpr Color White = Color(1);


};

#endif //SIMULATION_COLORS_H
