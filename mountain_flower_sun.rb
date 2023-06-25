# Create a class to track environmental impact data
class ImpactData
  # Initialize instance variables
  def initialize(waste_value, recycle_value, upcycle_value, sustainability_value)
    @waste_value = waste_value
    @recycle_value = recycle_value
    @upcycle_value = upcycle_value
    @sustainability_value = sustainability_value
  end

  # Accessor methods
  def waste_value
    @waste_value
  end

  def recycle_value
    @recycle_value
  end

  def upcycle_value
    @upcycle_value
  end

  def sustainability_value
    @sustainability_value
  end

  # Setter methods
  def waste_value=(value)
    @waste_value = value
  end

  def recycle_value=(value)
    @recycle_value = value
  end

  def upcycle_value=(value)
    @upcycle_value = value
  end

  def sustainability_value=(value)
    @sustainability_value = value
  end
end

# Create a method to reduce waste
def reduce_waste(initial_value, reduction_amount)
  if initial_value > 0
    new_value = initial_value - reduction_amount
    new_value = [new_value, 0].max
    puts "Waste value reduced from #{initial_value} to #{new_value}"
    new_value
  else
    puts "Initial waste value was 0, so no reduction was applied."
    initial_value
  end
end

# Create a method to increase recycling
def increase_recycling(initial_value, increase_amount)
  if initial_value >= 0
    new_value = initial_value + increase_amount
    puts "Recycling value increased from #{initial_value} to #{new_value}"
    new_value
  else
    puts "Initial recycling value was negative, so no increase was applied."
    initial_value
  end
end

# Create a method to increase upcycling
def increase_upcycling(initial_value, increase_amount)
  if initial_value >= 0
    new_value = initial_value + increase_amount
    puts "Upcycling value increased from #{initial_value} to #{new_value}"
    new_value
  else
    puts "Initial upcycling value was negative, so no increase was applied."
    initial_value
  end
end

# Create a method to increase sustainability
def increase_sustainability(initial_value, increase_amount)
  if initial_value >= 0
    new_value = initial_value + increase_amount
    puts "Sustainability value increased from #{initial_value} to #{new_value}"
    new_value
  else
    puts "Initial sustainability value was negative, so no increase was applied."
    initial_value
  end
end

# Create an instance of ImpactData
environmental_impact = ImpactData.new(100, 20, 30, 40)

# Reduce the waste value
reduced_waste_value = reduce_waste(environmental_impact.waste_value, 25)
# Increase the recycling value
increased_recycling_value = increase_recycling(environmental_impact.recycling_value, 10)
# Increase the upcycling value
increased_upcycling_value = increase_upcycling(environmental_impact.upcycle_value, 15)
# Increase the sustainability value
increased_sustainability_value = increase_sustainability(environmental_impact.sustainability_value, 20)

# Update the ImpactData object with the new values
environmental_impact.waste_value = reduced_waste_value
environmental_impact.recycling_value = increased_recycling_value
environmental_impact.upcycle_value = increased_upcycling_value
environmental_impact.sustainability_value = increased_sustainability_value

# Print out the final values
puts "Waste value: #{environmental_impact.waste_value}"
puts "Recycling value: #{environmental_impact.recycling_value}"
puts "Upcycling value: #{environmental_impact.upcycle_value}"
puts "Sustainability value: #{environmental_impact.sustainability_value}"