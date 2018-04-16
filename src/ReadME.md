# Describe the effect each of the P, I, D components had in your implementation.

* The P component is the proportional term, which is proportional to the CTE (CrossTrack Error). It is proportional in the sense that when the CTE reduces we turn the steering in the opposite direction and therefore the term is followed by a negative sign. However, the car always overshoots when we only use the P term and we get a very non-desirable oscillating motion.

* The D component is the differential term. It tries to smooth out the oscillations by changing the steering angle in proportion to the change in CTE between 2 time steps or in d(CTE)/dt. It decays CTE in such a way that oscillations are reduced.

* The PD controller works well for a non-biased system but when there is a systematic bias i.e. steering drift, the car tries to follow the path but always tends to drift away. This is fixed by adding the I component which is the integral component as it sums all the CTE up to that time (like an integral gives the area under a curve) and the steering angle is proportional to this value also. This is also preceded by a negative sign.

# Describe how the final hyperparameters were chosen.

I chose my hyperparameters by manual tweaking. I used to pass my coefficients in the main() function when I ran ./pid. I was playing around values given in the lesson and ultimately concluded that the values given in the lesson give the best results.