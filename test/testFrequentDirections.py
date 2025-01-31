import unittest
from ..python.utils.syntheticDataMaker import SyntheticDataMaker
from ..python.frequentDirections import FrequentDirections as Sketcher

class testFrequentDirections(unittest.TestCase):

  def test_running(self):
    n = 100
    d = 20
    ell = 5
    syntheticDataMaker = SyntheticDataMaker()
    syntheticDataMaker.initBeforeMake(d,signal_dimension=10,signal_to_noise_ratio=5,\
                                    signal_singular_value_decay_factor=1,signal_singular_value_decay_type='lin')
   
    sketcher = Sketcher(d,ell)

    for i in range(n):
        v = syntheticDataMaker.makeRow()
        sketcher.append(v)
    sketch = sketcher.get()
    self.assertEqual(sketch.shape,(ell,d))

if __name__ == '__main__':
    unittest.main()
