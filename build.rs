use std::env;
use std::path::PathBuf;
use std::process::Command;

fn main() {
    let src = env::current_dir().unwrap();
    let dst = PathBuf::from(env::var_os("OUT_DIR").unwrap());

    run(Command::new(src.join("mesa-12.0.1/configure"))
                .current_dir(&dst)
                .arg("--disable-gles1")
                .arg("--disable-gles2")
                .arg("--disable-dri")
                .arg("--disable-dri3")
                .arg("--disable-glx")
                .arg("--disable-egl")
                .arg("--disable-driglx-direct")
                .arg("--enable-gallium-osmesa")
                .arg("--with-gallium-drivers=swrast"));

    run(Command::new("make")
                .arg("-j16")
                .current_dir(&dst));
}

fn run(cmd: &mut Command) {
    println!("running: {:?}", cmd);
    let status = match cmd.status() {
        Ok(s) => s,
        Err(e) => panic!("failed to get status: {}", e),
    };
    if !status.success() {
        panic!("failed with: {}", status);
    }
}
