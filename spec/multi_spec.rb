RSpec.describe Multi do
  it "has a version number" do
    expect(Multi::VERSION).not_to be nil
  end

  it "does something useful" do
    expect(Multi::Hello.new.hello).to match /Hello World!/
    puts Multi::Hello.new.hello
  end
end
